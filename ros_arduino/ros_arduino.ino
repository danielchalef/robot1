/*
 * ROS Arduino controller for robot1
 * Daniel Chalef <daniel.chalef@gmail.com>
 *
 * Originally from: 
 * MockBotSerial Arduino  
 * Author: chrimo@moccy.xdsnet.de
 */

#include <Arduino.h>
#include <Servo.h> 
#include <ros.h>
#include <std_msgs/UInt16.h>

Servo servo1, servo2;

void ROS_CALLBACK1( const std_msgs::UInt16& cmd_msg1){ 
  servo1.write(cmd_msg1.data);                       //set servo angle, should be from 0-180  
  digitalWrite(13, HIGH-digitalRead(13));          //toggle led  
}

void ROS_CALLBACK2( const std_msgs::UInt16& cmd_msg2){ 
  servo2.write(cmd_msg2.data);                       //set servo angle, should be from 0-180  
  digitalWrite(13, HIGH-digitalRead(13));          //toggle led  
}

ros::NodeHandle nh;
ros::Subscriber <std_msgs::UInt16> sub1("/robot1/servo1", ROS_CALLBACK1);
ros::Subscriber <std_msgs::UInt16> sub2("/robot1/servo2", ROS_CALLBACK2);

void setup(){
  nh.initNode();
  nh.subscribe(sub1);
  nh.subscribe(sub2);
  
  servo1.attach(9); //attach it to pin 9
  servo2.attach(10); //attach it to pin 10
}

void loop(){

  nh.spinOnce();

}
