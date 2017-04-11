// randomly generated velocity to cmd_vel
#include <ros/ros.h>
#include <geometry_msgs/Twist.h> // for geomertey_mssgs::Twist
#include <stdlib.h> // for rand() and RAND_MAX

int main(int argc,char **argv){
  // intiaslise ros system to become a NodeHandle
  ros::init(argc, argv, "publish_velocity");
  ros::NodeHandle nh;
  //create a pblisher object
  ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel",1000);
  srand(time(0));
  ros::Rate rate(2);
  while(ros::ok()){
    // create and fill the other four fields
    geometry_msgs::Twist msg;
    msg.linear.x = double(rand())/double(RAND_MAX);
    msg.angular.z = 2*double(rand())/double(RAND_MAX)-1;

    // publish the message
    pub.publish(msg);

    // send a message to rosout
    ROS_INFO_STREAM("swdin randm velcotu commaf: "<< "linear = "<<msg.linear.x<<" angular = "<<msg.angular.z);
    // wait until its time for pther oteration
    rate.sleep();
  }
}
