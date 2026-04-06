// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from surveillance_interfaces:action/SecurityAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "surveillance_interfaces/action/detail/security_action__functions.h"
#include "surveillance_interfaces/action/detail/security_action__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_Goal_type_support_ids_t;

static const _SecurityAction_Goal_type_support_ids_t _SecurityAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_Goal_type_support_symbol_names_t _SecurityAction_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_Goal)),
  }
};

typedef struct _SecurityAction_Goal_type_support_data_t
{
  void * data[2];
} _SecurityAction_Goal_type_support_data_t;

static _SecurityAction_Goal_type_support_data_t _SecurityAction_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_Goal_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_Goal__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_Goal__get_type_description,
  &surveillance_interfaces__action__SecurityAction_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_Goal>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_Goal)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__functions.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_Result_type_support_ids_t;

static const _SecurityAction_Result_type_support_ids_t _SecurityAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_Result_type_support_symbol_names_t _SecurityAction_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_Result)),
  }
};

typedef struct _SecurityAction_Result_type_support_data_t
{
  void * data[2];
} _SecurityAction_Result_type_support_data_t;

static _SecurityAction_Result_type_support_data_t _SecurityAction_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_Result_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_Result__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_Result__get_type_description,
  &surveillance_interfaces__action__SecurityAction_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_Result>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_Result)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__functions.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_Feedback_type_support_ids_t;

static const _SecurityAction_Feedback_type_support_ids_t _SecurityAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_Feedback_type_support_symbol_names_t _SecurityAction_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_Feedback)),
  }
};

typedef struct _SecurityAction_Feedback_type_support_data_t
{
  void * data[2];
} _SecurityAction_Feedback_type_support_data_t;

static _SecurityAction_Feedback_type_support_data_t _SecurityAction_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_Feedback_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_Feedback__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_Feedback__get_type_description,
  &surveillance_interfaces__action__SecurityAction_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_Feedback>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_Feedback)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__functions.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_SendGoal_Request_type_support_ids_t;

static const _SecurityAction_SendGoal_Request_type_support_ids_t _SecurityAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_SendGoal_Request_type_support_symbol_names_t _SecurityAction_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_SendGoal_Request)),
  }
};

typedef struct _SecurityAction_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SecurityAction_SendGoal_Request_type_support_data_t;

static _SecurityAction_SendGoal_Request_type_support_data_t _SecurityAction_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_SendGoal_Request_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_SendGoal_Request__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_SendGoal_Request__get_type_description,
  &surveillance_interfaces__action__SecurityAction_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal_Request>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_SendGoal_Request)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__functions.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_SendGoal_Response_type_support_ids_t;

static const _SecurityAction_SendGoal_Response_type_support_ids_t _SecurityAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_SendGoal_Response_type_support_symbol_names_t _SecurityAction_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_SendGoal_Response)),
  }
};

typedef struct _SecurityAction_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SecurityAction_SendGoal_Response_type_support_data_t;

static _SecurityAction_SendGoal_Response_type_support_data_t _SecurityAction_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_SendGoal_Response_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_SendGoal_Response__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_SendGoal_Response__get_type_description,
  &surveillance_interfaces__action__SecurityAction_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal_Response>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_SendGoal_Response)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__functions.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_SendGoal_Event_type_support_ids_t;

static const _SecurityAction_SendGoal_Event_type_support_ids_t _SecurityAction_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_SendGoal_Event_type_support_symbol_names_t _SecurityAction_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_SendGoal_Event)),
  }
};

typedef struct _SecurityAction_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _SecurityAction_SendGoal_Event_type_support_data_t;

static _SecurityAction_SendGoal_Event_type_support_data_t _SecurityAction_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_SendGoal_Event_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_SendGoal_Event__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_SendGoal_Event__get_type_description,
  &surveillance_interfaces__action__SecurityAction_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal_Event>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_SendGoal_Event)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_SendGoal_type_support_ids_t;

static const _SecurityAction_SendGoal_type_support_ids_t _SecurityAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_SendGoal_type_support_symbol_names_t _SecurityAction_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_SendGoal)),
  }
};

typedef struct _SecurityAction_SendGoal_type_support_data_t
{
  void * data[2];
} _SecurityAction_SendGoal_type_support_data_t;

static _SecurityAction_SendGoal_type_support_data_t _SecurityAction_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_SendGoal_service_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SecurityAction_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<surveillance_interfaces::action::SecurityAction_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<surveillance_interfaces::action::SecurityAction_SendGoal>,
  &surveillance_interfaces__action__SecurityAction_SendGoal__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_SendGoal__get_type_description,
  &surveillance_interfaces__action__SecurityAction_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<surveillance_interfaces::action::SecurityAction_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__functions.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_GetResult_Request_type_support_ids_t;

static const _SecurityAction_GetResult_Request_type_support_ids_t _SecurityAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_GetResult_Request_type_support_symbol_names_t _SecurityAction_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_GetResult_Request)),
  }
};

typedef struct _SecurityAction_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SecurityAction_GetResult_Request_type_support_data_t;

static _SecurityAction_GetResult_Request_type_support_data_t _SecurityAction_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_GetResult_Request_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_GetResult_Request__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_GetResult_Request__get_type_description,
  &surveillance_interfaces__action__SecurityAction_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult_Request>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_GetResult_Request)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__functions.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_GetResult_Response_type_support_ids_t;

static const _SecurityAction_GetResult_Response_type_support_ids_t _SecurityAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_GetResult_Response_type_support_symbol_names_t _SecurityAction_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_GetResult_Response)),
  }
};

typedef struct _SecurityAction_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SecurityAction_GetResult_Response_type_support_data_t;

static _SecurityAction_GetResult_Response_type_support_data_t _SecurityAction_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_GetResult_Response_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_GetResult_Response__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_GetResult_Response__get_type_description,
  &surveillance_interfaces__action__SecurityAction_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult_Response>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_GetResult_Response)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__functions.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_GetResult_Event_type_support_ids_t;

static const _SecurityAction_GetResult_Event_type_support_ids_t _SecurityAction_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_GetResult_Event_type_support_symbol_names_t _SecurityAction_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_GetResult_Event)),
  }
};

typedef struct _SecurityAction_GetResult_Event_type_support_data_t
{
  void * data[2];
} _SecurityAction_GetResult_Event_type_support_data_t;

static _SecurityAction_GetResult_Event_type_support_data_t _SecurityAction_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_GetResult_Event_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_GetResult_Event__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_GetResult_Event__get_type_description,
  &surveillance_interfaces__action__SecurityAction_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult_Event>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_GetResult_Event)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_GetResult_type_support_ids_t;

static const _SecurityAction_GetResult_type_support_ids_t _SecurityAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_GetResult_type_support_symbol_names_t _SecurityAction_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_GetResult)),
  }
};

typedef struct _SecurityAction_GetResult_type_support_data_t
{
  void * data[2];
} _SecurityAction_GetResult_type_support_data_t;

static _SecurityAction_GetResult_type_support_data_t _SecurityAction_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_GetResult_service_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SecurityAction_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<surveillance_interfaces::action::SecurityAction_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<surveillance_interfaces::action::SecurityAction_GetResult>,
  &surveillance_interfaces__action__SecurityAction_GetResult__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_GetResult__get_type_description,
  &surveillance_interfaces__action__SecurityAction_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<surveillance_interfaces::action::SecurityAction_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__functions.h"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SecurityAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SecurityAction_FeedbackMessage_type_support_ids_t;

static const _SecurityAction_FeedbackMessage_type_support_ids_t _SecurityAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SecurityAction_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SecurityAction_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SecurityAction_FeedbackMessage_type_support_symbol_names_t _SecurityAction_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, surveillance_interfaces, action, SecurityAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, surveillance_interfaces, action, SecurityAction_FeedbackMessage)),
  }
};

typedef struct _SecurityAction_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SecurityAction_FeedbackMessage_type_support_data_t;

static _SecurityAction_FeedbackMessage_type_support_data_t _SecurityAction_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SecurityAction_FeedbackMessage_message_typesupport_map = {
  2,
  "surveillance_interfaces",
  &_SecurityAction_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SecurityAction_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SecurityAction_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SecurityAction_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SecurityAction_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &surveillance_interfaces__action__SecurityAction_FeedbackMessage__get_type_hash,
  &surveillance_interfaces__action__SecurityAction_FeedbackMessage__get_type_description,
  &surveillance_interfaces__action__SecurityAction_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_FeedbackMessage>()
{
  return &::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction_FeedbackMessage)() {
  return get_message_type_support_handle<surveillance_interfaces::action::SecurityAction_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "surveillance_interfaces/action/detail/security_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace surveillance_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t SecurityAction_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &surveillance_interfaces__action__SecurityAction__get_type_hash,
  &surveillance_interfaces__action__SecurityAction__get_type_description,
  &surveillance_interfaces__action__SecurityAction__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace surveillance_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<surveillance_interfaces::action::SecurityAction>()
{
  using ::surveillance_interfaces::action::rosidl_typesupport_cpp::SecurityAction_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  SecurityAction_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::surveillance_interfaces::action::SecurityAction::Impl::SendGoalService>();
  SecurityAction_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::surveillance_interfaces::action::SecurityAction::Impl::GetResultService>();
  SecurityAction_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::surveillance_interfaces::action::SecurityAction::Impl::CancelGoalService>();
  SecurityAction_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::surveillance_interfaces::action::SecurityAction::Impl::FeedbackMessage>();
  SecurityAction_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::surveillance_interfaces::action::SecurityAction::Impl::GoalStatusMessage>();
  return &SecurityAction_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, surveillance_interfaces, action, SecurityAction)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<surveillance_interfaces::action::SecurityAction>();
}

#ifdef __cplusplus
}
#endif
