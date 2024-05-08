# BehaviorTreeROS2_tutorial

This repository serves as an additional tutorial for BehaviorTree.ROS2.

## How to use this tutorial

### (1) Sleep Action (Original Example)

This is one of the original test examples from the official repository, available at [BehaviorTree/BehaviorTree.ROS2](https://github.com/BehaviorTree/BehaviorTree.ROS2). It appears that some files were missing in the original example, so I have modified it to ensure we can successfully run at least one of them, named "SleepActionSample".



```
git clone <repository-url>
colcon build
source install/local_setup.bash

ros2 launch btcpp_ros2_samples sample_bt_executor.launch.xml
```




In another terminal, but within the same file path, execute:

```
source install/local_setup.bash
ros2 action send_goal /behavior_server btcpp_ros2_interfaces/action/ExecuteTree "{ target_tree: SleepActionSample }"
```


### (2) Rotate Turtlesim 

This example shows how we can add a new interface with BT and ROS2. 


In another terminal, but within the same file path, execute:
```
source install/local_setup.bash
ros2 action send_goal /behavior_server btcpp_ros2_interfaces/action/ExecuteTree "{ target_tree: RotateTurtle }"
```


For more information, please refer to the [BehaviorTree.ROS2](https://github.com/BehaviorTree/BehaviorTree.ROS2).

