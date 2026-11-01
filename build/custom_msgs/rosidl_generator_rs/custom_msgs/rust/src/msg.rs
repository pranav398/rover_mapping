#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to custom_msgs__msg__Fov

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Fov {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fov_size: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_rad: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roughness: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub muddiness: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wetness: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_cells: Vec<bool>,

}



impl Default for Fov {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Fov::default())
  }
}

impl rosidl_runtime_rs::Message for Fov {
  type RmwMsg = super::msg::rmw::Fov;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        battery: msg.battery,
        fov_size: msg.fov_size,
        target_x: msg.target_x,
        target_y: msg.target_y,
        target_rad: msg.target_rad,
        height: msg.height.as_slice().into(),
        roughness: msg.roughness.as_slice().into(),
        muddiness: msg.muddiness.as_slice().into(),
        wetness: msg.wetness.as_slice().into(),
        goal_cells: msg.goal_cells.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      battery: msg.battery,
      fov_size: msg.fov_size,
      target_x: msg.target_x,
      target_y: msg.target_y,
      target_rad: msg.target_rad,
        height: msg.height.as_slice().into(),
        roughness: msg.roughness.as_slice().into(),
        muddiness: msg.muddiness.as_slice().into(),
        wetness: msg.wetness.as_slice().into(),
        goal_cells: msg.goal_cells.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      battery: msg.battery,
      fov_size: msg.fov_size,
      target_x: msg.target_x,
      target_y: msg.target_y,
      target_rad: msg.target_rad,
      height: msg.height.into(),
      roughness: msg.roughness.into(),
      muddiness: msg.muddiness.into(),
      wetness: msg.wetness.into(),
      goal_cells: msg.goal_cells.into(),
    }
  }
}


// Corresponds to custom_msgs__msg__Info

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Info {

    // This member is not documented.
    #[allow(missing_docs)]
    pub battery: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: i32,

}



impl Default for Info {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Info::default())
  }
}

impl rosidl_runtime_rs::Message for Info {
  type RmwMsg = super::msg::rmw::Info;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        battery: msg.battery,
        x: msg.x,
        y: msg.y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      battery: msg.battery,
      x: msg.x,
      y: msg.y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      battery: msg.battery,
      x: msg.x,
      y: msg.y,
    }
  }
}


