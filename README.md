
# Rover Mapping and Autonomous Exploration

A ROS 2-based rover simulation project that explores and maps a procedurally generated 2D terrain while managing battery consumption and navigating toward a hidden goal.

The project demonstrates modular ROS 2 communication using custom messages, services, publishers, and subscribers, along with local terrain perception and heuristic-based autonomous navigation.

---

## Overview

The simulation consists of a rover operating in a randomly generated grid world. Each cell in the environment contains four terrain properties:

- **Height** – Terrain elevation.
- **Roughness** – Surface roughness.
- **Muddiness** – Mud level.
- **Wetness** – Water content.

The rover starts at a randomly generated spawn location and must explore its surroundings to discover a hidden goal located within a randomly generated target region.

The rover receives information only about its local Field of View (FOV). It maintains an internal representation of explored cells and uses the available terrain information to decide where to move.

Battery consumption is integrated into the movement system, ensuring that every movement is evaluated against the rover's remaining energy.

## Key Features

- **Procedural Terrain Generation:** Generates a 2D environment with height, roughness, muddiness, and wetness maps.
- **Autonomous Exploration:** Uses local terrain information to explore previously unobserved regions.
- **Destination Navigation:** Switches to goal-directed navigation after discovering the target.
- **Local Field of View:** Provides the rover with a limited view of its surrounding environment.
- **Battery Management:** Tracks battery levels and validates movement costs before allowing movement.
- **Exploration Mapping:** Maintains and visualizes an internal map of observed cells.
- **Randomized Environment:** Generates the goal, target region, and rover spawn location at runtime.
- **ROS 2 Architecture:** Uses custom ROS 2 messages and services for communication between independent nodes.

## System Architecture

The project is organized into two ROS 2 packages:

| Package | Responsibility |
|---|---|
| `custom_msgs` | Defines custom ROS 2 messages and services. |
| `world_map` | Implements terrain generation, rover movement, battery management, exploration, visualization, and launch configuration. |

### ROS 2 Nodes

| Node | Description |
|---|---|
| `map_node` | Generates terrain, manages rover position, handles movement requests, publishes FOV data, and visualizes terrain maps. |
| `battery_node` | Maintains battery state, publishes battery updates, and handles battery deduction requests. |
| `explore_node` | Processes FOV data, maintains the explored map, and plans rover movements. |
| `switch_mode_client` | Provides a client for switching between exploration and destination modes. |

### Communication Interfaces

#### Topics

| Topic | Message Type | Purpose |
|---|---|---|
| `/rover/fov` | `custom_msgs/msg/Fov` | Publishes rover position, battery state, local terrain information, target-region metadata, and goal indicators. |
| `/rover/battery` | `std_msgs/msg/Float32` | Publishes the current battery level. |

#### Services

| Service | Service Type | Purpose |
|---|---|---|
| `/rover/move` | `custom_msgs/srv/Move` | Requests rover movement and corresponding battery deduction. |
| `/rover/update_battery` | `custom_msgs/srv/Battery` | Validates and processes battery deductions. |
| `/rover/switch_mode` | `custom_msgs/srv/SwitchMode` | Switches the explorer between exploration and destination modes. |

## Terrain and Environment Generation

The map node generates four terrain layers:

1. **Height Map:** Generated outward from the center of the map using neighboring initialized values and random noise.
2. **Roughness Map:** Randomly generated values between 0 and 1.
3. **Muddiness Map:** Randomly generated values between 0 and 1.
4. **Wetness Map:** Randomly generated values between 0 and 1.

The environment also contains:

- A randomly generated goal coordinate.
- A square target region containing the goal.
- A randomly generated rover spawn location outside the target region.

The target region is controlled by the `target_rad` parameter. For a radius \(r\), its dimensions are:

\[
(2r+1)\times(2r+1)
\]

The spawn and goal locations are subject to terrain walkability constraints.

Importantly, the explorer does not receive the goal coordinates directly. It discovers the goal only when the corresponding cell becomes visible in an incoming FOV message.

## Navigation Modes

The rover supports two navigation modes.

### 1. Exploration Mode

In exploration mode, the rover autonomously explores its environment to discover new regions.

The planner evaluates neighboring movements using:

- Local terrain walkability.
- Available battery.
- Terrain properties.
- The number of newly observable cells.
- Short-horizon movement evaluation.

When the immediate information-based scoring does not produce a suitable movement, the planner falls back to moving toward an unexplored frontier.

Every received FOV updates the rover's internal explored-cell matrix.

### 2. Destination Mode

Destination mode focuses on navigating toward the target.

The behavior is divided into two stages:

- **Before goal discovery:** The rover moves toward and explores the target region.
- **After goal discovery:** The rover selects locally visible, walkable, and affordable movements that reduce its octile distance to the discovered goal.

Once the rover reaches the goal, it remains stationary.

### Switching Between Modes

The explorer can be switched between modes using the `switch_mode_client`.

| Parameter | Mode |
|---|---|
| `mode:=true` | Exploration Mode |
| `mode:=false` | Destination Mode |

## Battery Management

Battery management is integrated directly into the rover's movement pipeline.

For each movement request:

1. The explorer sends a movement request to `/rover/move`.
2. The map node forwards the requested battery deduction to `/rover/update_battery`.
3. The battery node checks whether sufficient energy is available.
4. If the deduction is accepted, the rover's position is updated.
5. If the deduction is rejected or the battery service is unavailable, the movement is not executed.

This prevents the rover from moving when it cannot afford the requested movement.

## Field of View (FOV)

The rover receives a local view of its surroundings through the `/rover/fov` topic.

The custom `Fov` message contains:

- Rover coordinates (`x`, `y`).
- Current battery level.
- FOV side length.
- Target-region center and radius.
- Height values.
- Roughness values.
- Muddiness values.
- Wetness values.
- Boolean goal-cell indicators.

Terrain layers are transmitted as flattened, row-major arrays.

For an FOV of side length \(n\), the index of an element at row \(i\) and column \(j\) is:

\[
\text{index}=i\times n+j
\]

The FOV is published at **2 Hz**, allowing the explorer to continuously update its understanding of the surrounding environment.

## Installation and Setup

### Prerequisites

- Ubuntu with a compatible ROS 2 installation.
- ROS 2 development tools, including `colcon`.
- Python 3.
- NumPy.
- Matplotlib.
- A graphical environment for visualization.

Make sure your ROS 2 installation is sourced before building the workspace.

### 1. Clone the Repository

```bash
git clone https://github.com/pranav398/rover_mapping.git
cd rover_mapping
```

### 2. Source ROS 2

Replace `<ros2-distro>` with your installed ROS 2 distribution.

```bash
source /opt/ros/<ros2-distro>/setup.bash
```

### 3. Install Python Dependencies

```bash
pip install numpy matplotlib
```

### 4. Build the Workspace

From the repository root:

```bash
colcon build --symlink-install
```

### 5. Source the Workspace

```bash
source install/setup.bash
```

## Running the Simulation

Launch the complete rover simulation using:

```bash
ros2 launch world_map map.launch.py
```

The launch file starts the required ROS 2 nodes and the configured mode-switch client.

The default launch configuration switches the explorer to destination mode shortly after startup.

### Switching Navigation Modes Manually

To enable exploration mode:

```bash
ros2 run world_map switch_mode_client --ros-args -p mode:=true
```

To enable destination mode:

```bash
ros2 run world_map switch_mode_client --ros-args -p mode:=false
```

## Configuration

The default configuration is available at:

```text
src/world_map/config/rover.params.yaml
```

Current default parameters:

| Parameter | Default Value | Description |
|---|---:|---|
| Map length | 100 | Number of cells along one map dimension. |
| Map width | 100 | Number of cells along the other map dimension. |
| FOV side length | 5 | Side length of the rover's local field of view. |
| Target radius | 5 | Radius defining the square target region. |
| Maximum battery | 100.0 | Initial maximum battery capacity. |

Spawn and goal coordinates are generated dynamically rather than loaded from the configuration file.

**Note:** If map dimensions are changed, ensure that the corresponding parameters for both the map and explorer nodes remain consistent.

## Project Structure

```text
rover_mapping/
│
├── src/
│   │
│   ├── custom_msgs/
│   │   ├── msg/
│   │   │   ├── Fov.msg
│   │   │   └── Info.msg
│   │   │
│   │   └── srv/
│   │       ├── Move.srv
│   │       ├── Battery.srv
│   │       └── SwitchMode.srv
│   │
│   └── world_map/
│       ├── config/
│       │   └── rover.params.yaml
│       │
│       ├── launch/
│       │   └── map.launch.py
│       │
│       └── world_map/
│           ├── map_node.py
│           ├── battery_node.py
│           ├── explore_node.py
│           └── switch_mode_client.py
│
├── main.tex
├── main.pdf
└── README.md
```

## Visualization

The project uses Matplotlib to visualize the generated environment and exploration progress.

The map node displays four terrain plots:

- Height map.
- Roughness map.
- Muddiness map.
- Wetness map.

The rover's current position is marked on the height map and updated after accepted movements.

The explorer also maintains a visualization of observed cells, providing a representation of the rover's exploration progress.

A graphical environment and an interactive Matplotlib backend are required to view these plots.

## Limitations

The current implementation has a few limitations:

- **Local Planning:** Destination navigation uses a heuristic local planner rather than a global path-planning algorithm.
- **No Guaranteed Path:** Obstacles or battery constraints can prevent the rover from reaching a goal, even if an alternative longer route exists.
- **Connectivity:** The environment generator validates local terrain conditions but does not guarantee global connectivity between the spawn location and target.
- **Goal Visibility:** The exact goal coordinates remain hidden until the goal cell is observed through the FOV.
- **Exploration Representation:** The explored-cell matrix represents all cells observed through the FOV, not just cells physically visited by the rover.

## Future Improvements

Potential extensions to this project include:

- Implementing global path planning algorithms such as A*.
- Improving terrain-aware movement cost estimation.
- Introducing dynamic obstacles and more complex terrain conditions.
- Adding battery-aware return-to-base behavior.
- Improving exploration strategies and frontier selection.
- Introducing repeatable experiments using configurable random seeds.
- Evaluating exploration efficiency and navigation performance.

## Technical Report

For a detailed explanation of the system architecture, terrain generation, ROS 2 communication interfaces, movement logic, and navigation algorithms, refer to:

- [Technical Report (PDF)](main.pdf)
- [LaTeX Source (main.tex)](main.tex)

## Acknowledgements

Built using ROS 2, Python, NumPy, and Matplotlib.

---

**Repository:** [pranav398/rover_mapping](https://github.com/pranav398/rover_mapping)
