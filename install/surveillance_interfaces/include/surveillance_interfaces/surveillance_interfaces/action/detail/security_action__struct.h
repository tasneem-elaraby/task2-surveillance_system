// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from surveillance_interfaces:action/SecurityAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "surveillance_interfaces/action/security_action.h"


#ifndef SURVEILLANCE_INTERFACES__ACTION__DETAIL__SECURITY_ACTION__STRUCT_H_
#define SURVEILLANCE_INTERFACES__ACTION__DETAIL__SECURITY_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'event_type'
// Member 'severity'
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_Goal
{
  rosidl_runtime_c__String event_type;
  rosidl_runtime_c__String severity;
  rosidl_runtime_c__String description;
} surveillance_interfaces__action__SecurityAction_Goal;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_Goal.
typedef struct surveillance_interfaces__action__SecurityAction_Goal__Sequence
{
  surveillance_interfaces__action__SecurityAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'response_summary'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_Result
{
  bool success;
  rosidl_runtime_c__String response_summary;
} surveillance_interfaces__action__SecurityAction_Result;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_Result.
typedef struct surveillance_interfaces__action__SecurityAction_Result__Sequence
{
  surveillance_interfaces__action__SecurityAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_step'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_Feedback
{
  rosidl_runtime_c__String current_step;
  int32_t progress_percent;
} surveillance_interfaces__action__SecurityAction_Feedback;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_Feedback.
typedef struct surveillance_interfaces__action__SecurityAction_Feedback__Sequence
{
  surveillance_interfaces__action__SecurityAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "surveillance_interfaces/action/detail/security_action__struct.h"

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  surveillance_interfaces__action__SecurityAction_Goal goal;
} surveillance_interfaces__action__SecurityAction_SendGoal_Request;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_SendGoal_Request.
typedef struct surveillance_interfaces__action__SecurityAction_SendGoal_Request__Sequence
{
  surveillance_interfaces__action__SecurityAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} surveillance_interfaces__action__SecurityAction_SendGoal_Response;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_SendGoal_Response.
typedef struct surveillance_interfaces__action__SecurityAction_SendGoal_Response__Sequence
{
  surveillance_interfaces__action__SecurityAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  surveillance_interfaces__action__SecurityAction_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  surveillance_interfaces__action__SecurityAction_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  surveillance_interfaces__action__SecurityAction_SendGoal_Request__Sequence request;
  surveillance_interfaces__action__SecurityAction_SendGoal_Response__Sequence response;
} surveillance_interfaces__action__SecurityAction_SendGoal_Event;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_SendGoal_Event.
typedef struct surveillance_interfaces__action__SecurityAction_SendGoal_Event__Sequence
{
  surveillance_interfaces__action__SecurityAction_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} surveillance_interfaces__action__SecurityAction_GetResult_Request;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_GetResult_Request.
typedef struct surveillance_interfaces__action__SecurityAction_GetResult_Request__Sequence
{
  surveillance_interfaces__action__SecurityAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.h"

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_GetResult_Response
{
  int8_t status;
  surveillance_interfaces__action__SecurityAction_Result result;
} surveillance_interfaces__action__SecurityAction_GetResult_Response;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_GetResult_Response.
typedef struct surveillance_interfaces__action__SecurityAction_GetResult_Response__Sequence
{
  surveillance_interfaces__action__SecurityAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  surveillance_interfaces__action__SecurityAction_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  surveillance_interfaces__action__SecurityAction_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  surveillance_interfaces__action__SecurityAction_GetResult_Request__Sequence request;
  surveillance_interfaces__action__SecurityAction_GetResult_Response__Sequence response;
} surveillance_interfaces__action__SecurityAction_GetResult_Event;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_GetResult_Event.
typedef struct surveillance_interfaces__action__SecurityAction_GetResult_Event__Sequence
{
  surveillance_interfaces__action__SecurityAction_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.h"

/// Struct defined in action/SecurityAction in the package surveillance_interfaces.
typedef struct surveillance_interfaces__action__SecurityAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  surveillance_interfaces__action__SecurityAction_Feedback feedback;
} surveillance_interfaces__action__SecurityAction_FeedbackMessage;

// Struct for a sequence of surveillance_interfaces__action__SecurityAction_FeedbackMessage.
typedef struct surveillance_interfaces__action__SecurityAction_FeedbackMessage__Sequence
{
  surveillance_interfaces__action__SecurityAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} surveillance_interfaces__action__SecurityAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SURVEILLANCE_INTERFACES__ACTION__DETAIL__SECURITY_ACTION__STRUCT_H_
