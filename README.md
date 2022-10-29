# Environment
Ubuntu 20.04 + ROS Noetic
# Usage
1. Complie the file through 
```bash
catkin build
```
2. Source
```bash
source ~/{$workspace_name}/devel/setup.bash
```
3. Bring UR5e in Gazebo: 
```bash
roslaunch ur_e_gazebo ur5e.launch controller:=cartesian_velocity_controller_sim
```
4. Run admittance control:
```bash
roslaunch Admittance Admittance.launch
```
5. Exert external fake force:
```bash
roslaunch Admittance Wrench_Fake.launch
```

# Parameters
Admittance control parameters: `/control_algorithm/Admittance/config/AdmittanceParams.yaml`

Fake external wrench: `/control_algorithm/Admittance/src/WrenchSignalGenerate.cpp`

# New Features
1. Add base and wasit model