cmake_minimum_required(VERSION 2.8.3)
project(basics)

find_package(catkin REQUIRED COMPONENTS
roscpp
rospy
std_msgs
message_generation
)


# add_message_files(
#   FILES
#   Message1.msg
#   Message2.msg
# )

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
# generate_messages(
#   DEPENDENCIES
#   std_msgs  # Or other packages containing msgs
# )

add_service_files(
FILES
WordCount.srv
)
add_message_files(
FILES
complex.msg
)
generate_messages(
DEPENDENCIES
std_msgs
)


catkin_package()
