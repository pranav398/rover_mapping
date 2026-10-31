import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/run/media/pranav/Files/Education/IIT Bombay/MRT/rover_mapping/install/world_map'
