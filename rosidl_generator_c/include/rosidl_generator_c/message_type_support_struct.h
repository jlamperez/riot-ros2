// Copyright 2015-2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROSIDL_GENERATOR_C__MESSAGE_TYPE_SUPPORT_STRUCT_H_
#define ROSIDL_GENERATOR_C__MESSAGE_TYPE_SUPPORT_STRUCT_H_

#include "rosidl_generator_c/visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct rosidl_message_type_support_t rosidl_message_type_support_t;

typedef const rosidl_message_type_support_t * (* rosidl_message_typesupport_handle_function)(
  const rosidl_message_type_support_t *, const char *);

typedef struct ROSIDL_PUBLIC_TYPE rosidl_message_type_support_t
{
  const char * typesupport_identifier;
  const void * data;
  rosidl_message_typesupport_handle_function func;
} rosidl_message_type_support_t;

ROSIDL_GENERATOR_C_PUBLIC
const rosidl_message_type_support_t * get_message_typesupport_handle(
  const rosidl_message_type_support_t * handle, const char * identifier);

ROSIDL_GENERATOR_C_PUBLIC
const rosidl_message_type_support_t * get_message_typesupport_handle_function(
  const rosidl_message_type_support_t * handle, const char * identifier);

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_C__MESSAGE_TYPE_SUPPORT_STRUCT_H_
