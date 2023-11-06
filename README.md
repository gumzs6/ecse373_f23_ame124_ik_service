# ecse373_f23_ame124_ik_service
<h1>Inverse Kinematics Service and Client</h1>
<h2>Overview</h2>
<p>This package launches a service and client for retriving the solutions to inverse kinematic queries.</p>

<h2>Prior Setup</h2>
    <p>Open new terminal and configure ROS.</p>
    <p>Make sure to have the ARIAC 2019 simulation environment and ARIAC node installed on your device. Those can be found in the following repositories</p>
        <blockquote>
            <p>(https://github.com/cwru-eecs-373/cwru_ariac_2019.git)</p>
            <p>(https://github.com/cwru-eecs-373/ecse_373_ariac.git)</p>
        </blockquote>
    <p>Information about ARIAC 2019 Documentation can be found here: (https://bitbucket.org/osrf/ariac/wiki2019/Home).</p>

<h2>Instructions</h2>
    <p>Create a catkin workspace and clone this ik_service package into the src subdirectory.</p>
    <p>Launch the service node with the command `roslaunch ik_service ik_service.launch`</p>
      <ul>
        <li>When the 'rosrun ik_service ik_client' command is run, the output for the service should indicate that the the service was called. The output for the client should be the number of solutions and list one of the given solutions.</li>
      </ul>
