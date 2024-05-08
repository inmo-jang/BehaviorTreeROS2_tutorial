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

Then, you will see the turtle is rotating!



### (Optional) Monitoring by Groot2

With Groot2, you can monitor what stage this robot is in: 
Step 1) Run Groot2
Step 2) In "Monitor Mode", use port `1667` (this value is described in `btcpp_ros2_samples/config/sample_bt_executor.yaml`)
Step 3) Execute this behavior tree example 
Step 4) Click the connect icon, then you will see a tree like this. 
(Note: when the behavior tree you executed is finished, you should reconnect this)
![Screenshot from 2024-05-08 15-47-33](https://github.com/inmo-jang/BehaviorTreeROS2_tutorial/assets/42867523/f38f56c2-a457-4d34-918d-45d371679220)
Orange box means this is currently being executed. Green box means they are sucessfully finished. 



---------------------------
For more information, please refer to the [BehaviorTree.ROS2](https://github.com/BehaviorTree/BehaviorTree.ROS2).

