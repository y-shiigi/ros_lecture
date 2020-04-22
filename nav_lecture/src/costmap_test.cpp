#include <ros/ros.h>
#include <std_msgs/String.h>
#include <tf/transform_listener.h>
#include <costmap_2d/costmap_2d_ros.h>
#include <nav_core/base_global_planner.h>
#include <pluginlib/class_loader.hpp>
#include <base_local_planner/trajectory_planner_ros.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "costmap");
  tf::TransformListener tf(ros::Duration(10));
  costmap_2d::Costmap2DROS costmap("my_costmap", tf);
  ros::NodeHandle n;
  costmap.start();
  ros::spin();
  return 0;
}
