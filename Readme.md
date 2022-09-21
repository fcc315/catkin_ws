
## Dependencies

### Opencv 3.4.0
```cmd
git clone https://github.com/RoboticsYY/opencv_deb_install.git
sudo dpkg -i opencv_deb_install/OpenCV-3.4/OpenCV-3.4.5-x86_64-*
```

### Libfranke
```cmd
sudo apt install ros-noetic-libfranka 
```

### Moveit
```cmd
sudo apt install ros-noetic-moveit ros-noetic-graph-msgs
```

### Build
```cmd
cd ~/catkin_ws
catkin_make -DOpenCV_DIR=/usr/local/share/OpenCV -DCMAKE_BUILD_TYPE=Release
```