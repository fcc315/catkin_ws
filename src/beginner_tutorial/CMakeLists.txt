cmake_minimum_required(VERSION 3.0.2)
project(beginner_tutorial)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

## Declare a catkin package, otherwise rosrun may not find the executables
catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(talker src/talker.cpp)
target_link_libraries(talker ${catkin_LIBRARIES})
add_dependencies(talker
  ${beginner_tutorial_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)

add_executable(listener src/listener.cpp)
target_link_libraries(listener ${catkin_LIBRARIES})
add_dependencies(listener
  ${beginner_tutorial_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)
