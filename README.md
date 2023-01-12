# Environment
ROS Melodic/Noetic

# New Features
1. Variable admittance control
2. Set robot initial pose and position for simulating the real setting in our lab
3. Set the consitant value T
# Usage in Simulation
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
roslaunch ur_e_gazebo ur10e.launch controller:=cartesian_velocity_controller_sim
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
VAC parameters: `Admittance.cpp`

Fake external wrench: `/control_algorithm/Admittance/src/WrenchSignalGenerate.cpp`

# TO DO
1. Update the real setting
2. Update the end-effector
3. Check the end-effector orientation setting
4. Add Moveit! function
# Reference
* https://github.com/MingshanHe/Compliant-Control-and-Application
