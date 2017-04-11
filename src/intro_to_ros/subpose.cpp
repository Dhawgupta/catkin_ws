#include <ros/ros.h>
#include <turtlesim/Pose.h>
#include <iomanip> // for std:: preciosion etc

// a call back function
// message arrives
void poseMessageReceived(const turtlesim::Pose &msg){
  ROS_INFO_STREAM(std::setprecision(2)<<std::fixed<<"Position = ("<<msg.x<<","<<msg.y<<")"<<"Direction = "<<msg.theta);

}
int main(int argc, char **argv){
  // intiialse the ros system and becoma a NodeHandle
  ros::init(argc, argv, "subscribe_to_pose");
  ros::NodeHandle nh;

  // create a subcriebr object
  ros::Subscriber sub = nh.subscribe("turtle1/pose",1000, &poseMessageReceived);
  // let ros taker ovre
  ros::spin();
}
