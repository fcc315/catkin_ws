#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
	ROS_INFO("I heard: [%s]", msg->data.c_str());
}


int main(int argc, char **argv) 
{
	ros::init(argc, argv, "listener");	// Init with the node name we define
	ros::NodeHandle n;	// Nodehandle is the main access point to communicate with ROS 
	ros::Subscriber chatter_sub = n.subscribe("chatter", 1000, chatterCallback);	// Topic name: chatter
	ros::spin();
	
	return 0;
}
