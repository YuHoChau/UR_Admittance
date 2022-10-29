# Environment
Ubuntu 20.04 + ROS Noetic
# Usage
1. Complie the file through $ `catkin build`
2. Source $ `source ~/{$workspace_name}/devel/setup.bash`
3. Bring UR10e in Gazebo: $ `roslaunch ur_e_gazebo ur5e.launch controller:=cartesian_velocity_controller_sim`
4. Run admittance control: $ `roslaunch Admittance Admittance.launch`
5. Exert external fake force: $ `roslaunch Admittance Wrench_Fake.launch`
6. I guess no other packages are needed
# Parameters
Admittance control parameters: `/control_algorithm/Admittance/config/AdmittanceParams.yaml`

Fake external wrench: `/control_algorithm/Admittance/src/WrenchSignalGenerate.cpp`