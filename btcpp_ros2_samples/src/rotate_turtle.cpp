#include "rotate_turtle.hpp"
#include "behaviortree_ros2/plugins.hpp"

bool RotateAbsoluteAction::setGoal(RosActionNode::Goal& goal)
{
  auto theta = getInput<unsigned>("theta");
  goal.theta = theta.value();
  return true;
}

NodeStatus RotateAbsoluteAction::onResultReceived(const RosActionNode::WrappedResult& wr)
{
  // RCLCPP_INFO(logger(), "%s: onResultReceived. Done = %s", name().c_str(),
  //             wr.result->done ? "true" : "false");

  // return wr.result->done ? NodeStatus::SUCCESS : NodeStatus::FAILURE;
  RCLCPP_INFO(logger(), "%s: onResultReceived.", name().c_str());

  return NodeStatus::SUCCESS;
}

NodeStatus RotateAbsoluteAction::onFailure(ActionNodeErrorCode error)
{
  RCLCPP_ERROR(logger(), "%s: onFailure with error: %s", name().c_str(), toStr(error));
  return NodeStatus::FAILURE;
}

void RotateAbsoluteAction::onHalt()
{
  RCLCPP_INFO(logger(), "%s: onHalt", name().c_str());
}

// Plugin registration.
// The class RotateAbsoluteAction will self register with name  "RotateAbsoluteAction".
CreateRosNodePlugin(RotateAbsoluteAction, "RotateAbsoluteAction");
