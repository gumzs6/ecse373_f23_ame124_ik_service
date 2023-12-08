<h1>Inverse Kinematics Service and Client</h1>
<h2>Overview</h2>
<p>This package launches a service and client for retriving the solutions to inverse kinematic queries.</p>

<h2>Prior Setup</h2>
    <p>Open new terminal and configure ROS.</p>
    <p>Make sure to have the ARIAC 2019 simulation environment and ARIAC node installed on your device. Those can be found in the following repositories</p>
        <blockquote>
            <p><link>https://github.com/cwru-eecs-373/cwru_ariac_2019.git</link></p>
            <p><link>https://github.com/cwru-eecs-373/ecse_373_ariac.git</link></p>
        </blockquote>
    <p>Information about ARIAC 2019 Documentation can be found here: <link>https://bitbucket.org/osrf/ariac/wiki2019/Home</link>.</p>

<h2>Instructions</h2>
    <p>Create a catkin workspace and clone this ik_service package into the src subdirectory.</p>
    <p>Launch the service node with the command <code>roslaunch ik_service ik_service.launch</code> or <code>rosrun ik_service ik_service</code>.</p>
      <ul>
        <li>When the <code>rosrun ik_service ik_client</code> command is run, the output for the service should indicate that the the service was called. The output for the client should be the number of solutions and list one of the given solutions.</li>
      </ul>
    <p>To input a call to the service use the command <code>rosservice call /pose_ik "part_pose:
  position:
    x: 0.0
    y: 0.0
    z: 0.0
  orientation:
    x: 0.0
    y: 0.0
    z: 0.0
    w: 0.0" 
</code> which can be written with the help of tab complete.</p>
