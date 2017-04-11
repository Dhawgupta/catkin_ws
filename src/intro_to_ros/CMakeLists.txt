cmake_minimum_required(VERSION 2.8.3)


project(intro_to_ros)

find_package(catkin REQUIRED COMPONENTS roscpp geometry_msgs turtlesim rospy)

catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(hello hello.cpp)
add_executable(pubvel pubvel.cpp)
add_executable(subpose subpose.cpp)
add_executable(anon_name anon_name.cpp)
target_link_libraries(subpose ${catkin_LIBRARIES})
target_link_libraries(pubvel ${catkin_LIBRARIES})
target_link_libraries(hello ${catkin_LIBRARIES})
target_link_libraries(anon_name ${catkin_LIBRARIES})
