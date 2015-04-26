# robot1
robot1 is my first attempt at a neato platformed, ros-controlled robot. Yes, the name "robot1" is very creative.

Completed:
- removed innards of neato
- got the neato platform running as a ROS node thanks to neato_robot running on a RPi2 (strapped inside the neato chassis). The LIDAR works well, and it's somewhat good at finding its way around.

TODO:
- get a hacked together OpenCV-based PiCAM facetracker installed on to the working as a ROS node (the facetracker already works as a standalone Pi/PC and Arduino project). Or utilize one of the several existing ROS RGB-D tracking nodes when my Kinect arrives)
- add neato battery level as a ROS neato_node published topic.
- utilize an HB-200 microwave sensor to detect movement. Only activating the tracking camera when movement is sensed (servos, camera and OpenCV are energy expensive).
- Do something cool with Deep Belief utilizing the RPI2's QPUs.
- install a digital personal assistant (like Siri) on to the Pi. And possibly hack it to become a ROS node.

The bits and pieces:
- a neato xv-11 (bought from ebay as used/ broken, had to fix broken wheel springs).
- a Raspberry Pi2 running Ubuntu 14.04 (much, much easier to get ROS up and running using Ubuntu debs than compiling on Raspian). And an external USB SDD drive which is useful as swap and workspace when compiling on the Pi (when this is needed and not used when placed in robot).
- a Raspicam
- Arduino Uno and Arduino Nano
- a pan/tilt kit, with plenty of spare 9g servos.
- an HB200A microwave sensor
- soon to be delivered Kinect to be used as an RGB-D sensor
- a bunch of other cool sensors, including proximity, temp & humidity, IR, fire & gas, several mini breadboards, a soldering iron and a load of electronics bits & pieces.
