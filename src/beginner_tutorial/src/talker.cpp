#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv) 
{
	ros::init(argc, argv, "talker");	// Init with the node name we define
	ros::NodeHandle n;	// Nodehandle is the main access point to communicate with ROS 
	ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);	// Topic name: chatter
	ros::Rate loop_rate(10);	// 10 Hz

	int count = 0;

	while (ros::ok()) { // To create messages
		std_msgs::String msg;
		
		std::stringstream ss;
		ss << "Hello world: " << count;
		msg.data = ss.str();
		
		std::cout << msg.data.c_str() << std::endl; // Debugging
		
		chatter_pub.publish(msg);

		ros::spinOnce();
		
		loop_rate.sleep();
		
		++count;
	}
	
	return 0;
}
