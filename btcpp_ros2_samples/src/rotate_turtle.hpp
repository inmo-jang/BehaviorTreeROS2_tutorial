#include "behaviortree_ros2/bt_action_node.hpp"
#include "turtlesim/action/rotate_absolute.hpp"

using namespace BT;

class RotateAbsoluteAction : public RosActionNode<turtlesim::action::RotateAbsolute>
{
public:
  RotateAbsoluteAction(const std::string& name, const NodeConfig& conf,
              const RosNodeParams& params)
    : RosActionNode<turtlesim::action::RotateAbsolute>(name, conf, params)
  {}

  static BT::PortsList providedPorts()
  {
    return providedBasicPorts({ InputPort<unsigned>("theta") });
  }

  bool setGoal(Goal& goal) override;

  void onHalt() override;

  BT::NodeStatus onResultReceived(const WrappedResult& wr) override;

  virtual BT::NodeStatus onFailure(ActionNodeErrorCode error) override;
};
