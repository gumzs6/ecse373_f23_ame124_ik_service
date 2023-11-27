#include "ros/ros.h"
#include "ik_service/PoseIK.h"
#include "ur_kinematics/ur_kin.h"

bool pose_ik(ik_service::PoseIK::Request &req, ik_service::PoseIK::Response &res)
{

    int num_sol;
    double q_sols[8][6];
    double T[4][4] = {{0.0, -1.0, 0.0, req.part_pose.position.x}, 
    {0.0, 0.0, 1.0, req.part_pose.position.y}, 
    {-1.0, 0.0, 0.0, req.part_pose.position.z}, 
    {0.0, 0.0, 0.0, 1.0}};
    num_sol = ur_kinematics::inverse(&T[0][0], (double *)&q_sols[0][0], 0.0);
    
    
    res.num_sols = num_sol;

    for (int idx = 0; idx < 8; idx++)
    {
        for (int jdx = 0; jdx < 6; jdx++) 
        {
            res.joint_solutions[idx].joint_angles[jdx] = q_sols[idx][jdx];
        }
    }

    ROS_INFO("Service called.");

    

    return true;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "ik_service");
    ros::NodeHandle n;

    ros::ServiceServer service = n.advertiseService("pose_ik", pose_ik);
    ROS_INFO("Ready for call.");
    ros::spin();

    return 0;
}