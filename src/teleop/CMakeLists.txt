cmake_minimum_required(VERSION 2.8.3)
project(teleop)


find_package(catkin REQUIRED COMPONENTS roscpp geometry_msgs turtlesim rospy)

catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})
