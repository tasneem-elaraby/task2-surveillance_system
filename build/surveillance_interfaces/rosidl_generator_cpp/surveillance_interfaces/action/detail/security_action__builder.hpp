// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from surveillance_interfaces:action/SecurityAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "surveillance_interfaces/action/security_action.hpp"


#ifndef SURVEILLANCE_INTERFACES__ACTION__DETAIL__SECURITY_ACTION__BUILDER_HPP_
#define SURVEILLANCE_INTERFACES__ACTION__DETAIL__SECURITY_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "surveillance_interfaces/action/detail/security_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_Goal_description
{
public:
  explicit Init_SecurityAction_Goal_description(::surveillance_interfaces::action::SecurityAction_Goal & msg)
  : msg_(msg)
  {}
  ::surveillance_interfaces::action::SecurityAction_Goal description(::surveillance_interfaces::action::SecurityAction_Goal::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_Goal msg_;
};

class Init_SecurityAction_Goal_severity
{
public:
  explicit Init_SecurityAction_Goal_severity(::surveillance_interfaces::action::SecurityAction_Goal & msg)
  : msg_(msg)
  {}
  Init_SecurityAction_Goal_description severity(::surveillance_interfaces::action::SecurityAction_Goal::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return Init_SecurityAction_Goal_description(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_Goal msg_;
};

class Init_SecurityAction_Goal_event_type
{
public:
  Init_SecurityAction_Goal_event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAction_Goal_severity event_type(::surveillance_interfaces::action::SecurityAction_Goal::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_SecurityAction_Goal_severity(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_Goal>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_Goal_event_type();
}

}  // namespace surveillance_interfaces


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_Result_response_summary
{
public:
  explicit Init_SecurityAction_Result_response_summary(::surveillance_interfaces::action::SecurityAction_Result & msg)
  : msg_(msg)
  {}
  ::surveillance_interfaces::action::SecurityAction_Result response_summary(::surveillance_interfaces::action::SecurityAction_Result::_response_summary_type arg)
  {
    msg_.response_summary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_Result msg_;
};

class Init_SecurityAction_Result_success
{
public:
  Init_SecurityAction_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAction_Result_response_summary success(::surveillance_interfaces::action::SecurityAction_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SecurityAction_Result_response_summary(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_Result>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_Result_success();
}

}  // namespace surveillance_interfaces


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_Feedback_progress_percent
{
public:
  explicit Init_SecurityAction_Feedback_progress_percent(::surveillance_interfaces::action::SecurityAction_Feedback & msg)
  : msg_(msg)
  {}
  ::surveillance_interfaces::action::SecurityAction_Feedback progress_percent(::surveillance_interfaces::action::SecurityAction_Feedback::_progress_percent_type arg)
  {
    msg_.progress_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_Feedback msg_;
};

class Init_SecurityAction_Feedback_current_step
{
public:
  Init_SecurityAction_Feedback_current_step()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAction_Feedback_progress_percent current_step(::surveillance_interfaces::action::SecurityAction_Feedback::_current_step_type arg)
  {
    msg_.current_step = std::move(arg);
    return Init_SecurityAction_Feedback_progress_percent(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_Feedback>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_Feedback_current_step();
}

}  // namespace surveillance_interfaces


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_SendGoal_Request_goal
{
public:
  explicit Init_SecurityAction_SendGoal_Request_goal(::surveillance_interfaces::action::SecurityAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Request goal(::surveillance_interfaces::action::SecurityAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Request msg_;
};

class Init_SecurityAction_SendGoal_Request_goal_id
{
public:
  Init_SecurityAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAction_SendGoal_Request_goal goal_id(::surveillance_interfaces::action::SecurityAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SecurityAction_SendGoal_Request_goal(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_SendGoal_Request>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_SendGoal_Request_goal_id();
}

}  // namespace surveillance_interfaces


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_SendGoal_Response_stamp
{
public:
  explicit Init_SecurityAction_SendGoal_Response_stamp(::surveillance_interfaces::action::SecurityAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Response stamp(::surveillance_interfaces::action::SecurityAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Response msg_;
};

class Init_SecurityAction_SendGoal_Response_accepted
{
public:
  Init_SecurityAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAction_SendGoal_Response_stamp accepted(::surveillance_interfaces::action::SecurityAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SecurityAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_SendGoal_Response>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_SendGoal_Response_accepted();
}

}  // namespace surveillance_interfaces


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_SendGoal_Event_response
{
public:
  explicit Init_SecurityAction_SendGoal_Event_response(::surveillance_interfaces::action::SecurityAction_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Event response(::surveillance_interfaces::action::SecurityAction_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Event msg_;
};

class Init_SecurityAction_SendGoal_Event_request
{
public:
  explicit Init_SecurityAction_SendGoal_Event_request(::surveillance_interfaces::action::SecurityAction_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_SecurityAction_SendGoal_Event_response request(::surveillance_interfaces::action::SecurityAction_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SecurityAction_SendGoal_Event_response(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Event msg_;
};

class Init_SecurityAction_SendGoal_Event_info
{
public:
  Init_SecurityAction_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAction_SendGoal_Event_request info(::surveillance_interfaces::action::SecurityAction_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SecurityAction_SendGoal_Event_request(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_SendGoal_Event>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_SendGoal_Event_info();
}

}  // namespace surveillance_interfaces


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_GetResult_Request_goal_id
{
public:
  Init_SecurityAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::surveillance_interfaces::action::SecurityAction_GetResult_Request goal_id(::surveillance_interfaces::action::SecurityAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_GetResult_Request>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_GetResult_Request_goal_id();
}

}  // namespace surveillance_interfaces


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_GetResult_Response_result
{
public:
  explicit Init_SecurityAction_GetResult_Response_result(::surveillance_interfaces::action::SecurityAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::surveillance_interfaces::action::SecurityAction_GetResult_Response result(::surveillance_interfaces::action::SecurityAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_GetResult_Response msg_;
};

class Init_SecurityAction_GetResult_Response_status
{
public:
  Init_SecurityAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAction_GetResult_Response_result status(::surveillance_interfaces::action::SecurityAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SecurityAction_GetResult_Response_result(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_GetResult_Response>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_GetResult_Response_status();
}

}  // namespace surveillance_interfaces


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_GetResult_Event_response
{
public:
  explicit Init_SecurityAction_GetResult_Event_response(::surveillance_interfaces::action::SecurityAction_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::surveillance_interfaces::action::SecurityAction_GetResult_Event response(::surveillance_interfaces::action::SecurityAction_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_GetResult_Event msg_;
};

class Init_SecurityAction_GetResult_Event_request
{
public:
  explicit Init_SecurityAction_GetResult_Event_request(::surveillance_interfaces::action::SecurityAction_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_SecurityAction_GetResult_Event_response request(::surveillance_interfaces::action::SecurityAction_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SecurityAction_GetResult_Event_response(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_GetResult_Event msg_;
};

class Init_SecurityAction_GetResult_Event_info
{
public:
  Init_SecurityAction_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAction_GetResult_Event_request info(::surveillance_interfaces::action::SecurityAction_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SecurityAction_GetResult_Event_request(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_GetResult_Event>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_GetResult_Event_info();
}

}  // namespace surveillance_interfaces


namespace surveillance_interfaces
{

namespace action
{

namespace builder
{

class Init_SecurityAction_FeedbackMessage_feedback
{
public:
  explicit Init_SecurityAction_FeedbackMessage_feedback(::surveillance_interfaces::action::SecurityAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::surveillance_interfaces::action::SecurityAction_FeedbackMessage feedback(::surveillance_interfaces::action::SecurityAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_FeedbackMessage msg_;
};

class Init_SecurityAction_FeedbackMessage_goal_id
{
public:
  Init_SecurityAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityAction_FeedbackMessage_feedback goal_id(::surveillance_interfaces::action::SecurityAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SecurityAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::surveillance_interfaces::action::SecurityAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::surveillance_interfaces::action::SecurityAction_FeedbackMessage>()
{
  return surveillance_interfaces::action::builder::Init_SecurityAction_FeedbackMessage_goal_id();
}

}  // namespace surveillance_interfaces

#endif  // SURVEILLANCE_INTERFACES__ACTION__DETAIL__SECURITY_ACTION__BUILDER_HPP_
