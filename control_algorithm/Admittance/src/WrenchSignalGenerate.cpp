/*
 * @Author: MingshanHe 
 * @Date: 2021-12-05 04:08:58 
 * @Last Modified by: MingshanHe
 * @Last Modified time: 2021-12-05 04:13:10
 * @Licence: MIT Licence
 */
#include <ros/ros.h>
#include <geometry_msgs/WrenchStamped.h>

#define WRENCH_TOPIC    "/wrench"
#define TOPIC_HZ        100.0
 
int main(int argc, char ** argv)
{
    ros::init(argc, argv, "wrench_signal_generate");
    ros::NodeHandle nh;

    ros::Publisher wrench_pub = nh.advertise<geometry_msgs::WrenchStamped>(WRENCH_TOPIC, 5);
    ros::Duration Sleep(5.0);
    Sleep.sleep();
    ros::Rate   loop_rate(TOPIC_HZ);
    geometry_msgs::WrenchStamped wrench_msg;
    double t = 0;
    while (ros::ok())
    {
        // wrench_msg.force.x = sin(t);
        // wrench_msg.force.y = sin(t);
        // wrench_msg.wrench.force.z = 5*cos(t)+5;
        if(static_cast<int>(t)%10 < 3)
        {
            wrench_msg.wrench.force.z = -10;
        }
        else
        {
            wrench_msg.wrench.force.z = 0;
        }
        // wrench_msg.wrench.force.z = -10.4;
        // t += 1/TOPIC_HZ;
        // wrench_pub.publish(wrench_msg);
        // loop_rate.sleep();

        // wrench_msg.wrench.force.z = -10.2;
        // t += 1/TOPIC_HZ;
        // wrench_pub.publish(wrench_msg);
        // loop_rate.sleep();

        // wrench_msg.wrench.force.z = -10.1;
        // t += 1/TOPIC_HZ;
        // wrench_pub.publish(wrench_msg);
        // loop_rate.sleep();

        // wrench_msg.wrench.force.z = -10;
        // t += 1/TOPIC_HZ;
        // wrench_pub.publish(wrench_msg);
        // loop_rate.sleep();

        // wrench_msg.wrench.force.z = -9.9;
        // t += 1/TOPIC_HZ;
        // wrench_pub.publish(wrench_msg);
        // loop_rate.sleep();

        // wrench_msg.wrench.force.z = -9.8;
        // t += 1/TOPIC_HZ;
        // wrench_pub.publish(wrench_msg);
        // loop_rate.sleep();

        // wrench_msg.wrench.force.z = -9.7;
        // t += 1/TOPIC_HZ;
        // wrench_pub.publish(wrench_msg);
        // loop_rate.sleep();

        // wrench_msg.wrench.force.z = -9.6;
        t += 1/TOPIC_HZ;
        wrench_pub.publish(wrench_msg);
        loop_rate.sleep();
    }
    
}