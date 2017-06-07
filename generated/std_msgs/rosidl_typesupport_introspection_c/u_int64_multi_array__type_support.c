// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <std_msgs/msg/u_int64_multi_array__introspection_type_support.h>
#include "std_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "std_msgs/msg/u_int64_multi_array__struct.h"

// include message dependencies
// layout
#include "std_msgs/msg/multi_array_layout.h"
// layout
#include "std_msgs/msg/multi_array_layout__introspection_type_support.h"
// data
#include "rosidl_generator_c/primitives_array_functions.h"

#if __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember std_msgs__msg__rosidl_typesupport_introspection_c__UInt64MultiArray_message_member_array[2] = {
  {
    "layout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__UInt64MultiArray, layout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__UInt64MultiArray, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers std_msgs__msg__rosidl_typesupport_introspection_c__UInt64MultiArray_message_members = {
  "std_msgs",  // package name
  "UInt64MultiArray",  // message name
  2,  // number of fields
  std_msgs__msg__rosidl_typesupport_introspection_c__UInt64MultiArray_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t std_msgs__msg__rosidl_typesupport_introspection_c__UInt64MultiArray_message_type_support_handle = {
  0,
  &std_msgs__msg__rosidl_typesupport_introspection_c__UInt64MultiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_GENERATOR_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_GET_TYPE_SUPPORT_FUNCTION(std_msgs, msg, UInt64MultiArray)() {
  std_msgs__msg__rosidl_typesupport_introspection_c__UInt64MultiArray_message_member_array[0].members_ = ROSIDL_GET_TYPE_SUPPORT(std_msgs, msg, MultiArrayLayout);
  if (!std_msgs__msg__rosidl_typesupport_introspection_c__UInt64MultiArray_message_type_support_handle.typesupport_identifier) {
    std_msgs__msg__rosidl_typesupport_introspection_c__UInt64MultiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &std_msgs__msg__rosidl_typesupport_introspection_c__UInt64MultiArray_message_type_support_handle;
}

#if __cplusplus
}
#endif
