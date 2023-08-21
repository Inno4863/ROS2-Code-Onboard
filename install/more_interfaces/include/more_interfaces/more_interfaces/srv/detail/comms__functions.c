// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from more_interfaces:srv/Comms.idl
// generated code does not contain a copyright notice
#include "more_interfaces/srv/detail/comms__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `message`
// Member `pos_longitude`
// Member `pos_latitude`
// Member `pos_altitude`
#include "rosidl_runtime_c/string_functions.h"

bool
more_interfaces__srv__Comms_Request__init(more_interfaces__srv__Comms_Request * msg)
{
  if (!msg) {
    return false;
  }
  // trigger
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    more_interfaces__srv__Comms_Request__fini(msg);
    return false;
  }
  // pos_longitude
  if (!rosidl_runtime_c__String__init(&msg->pos_longitude)) {
    more_interfaces__srv__Comms_Request__fini(msg);
    return false;
  }
  // pos_latitude
  if (!rosidl_runtime_c__String__init(&msg->pos_latitude)) {
    more_interfaces__srv__Comms_Request__fini(msg);
    return false;
  }
  // pos_altitude
  if (!rosidl_runtime_c__String__init(&msg->pos_altitude)) {
    more_interfaces__srv__Comms_Request__fini(msg);
    return false;
  }
  // turn_yaw
  return true;
}

void
more_interfaces__srv__Comms_Request__fini(more_interfaces__srv__Comms_Request * msg)
{
  if (!msg) {
    return;
  }
  // trigger
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // pos_longitude
  rosidl_runtime_c__String__fini(&msg->pos_longitude);
  // pos_latitude
  rosidl_runtime_c__String__fini(&msg->pos_latitude);
  // pos_altitude
  rosidl_runtime_c__String__fini(&msg->pos_altitude);
  // turn_yaw
}

bool
more_interfaces__srv__Comms_Request__are_equal(const more_interfaces__srv__Comms_Request * lhs, const more_interfaces__srv__Comms_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trigger
  if (lhs->trigger != rhs->trigger) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // pos_longitude
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pos_longitude), &(rhs->pos_longitude)))
  {
    return false;
  }
  // pos_latitude
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pos_latitude), &(rhs->pos_latitude)))
  {
    return false;
  }
  // pos_altitude
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pos_altitude), &(rhs->pos_altitude)))
  {
    return false;
  }
  // turn_yaw
  if (lhs->turn_yaw != rhs->turn_yaw) {
    return false;
  }
  return true;
}

bool
more_interfaces__srv__Comms_Request__copy(
  const more_interfaces__srv__Comms_Request * input,
  more_interfaces__srv__Comms_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // trigger
  output->trigger = input->trigger;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // pos_longitude
  if (!rosidl_runtime_c__String__copy(
      &(input->pos_longitude), &(output->pos_longitude)))
  {
    return false;
  }
  // pos_latitude
  if (!rosidl_runtime_c__String__copy(
      &(input->pos_latitude), &(output->pos_latitude)))
  {
    return false;
  }
  // pos_altitude
  if (!rosidl_runtime_c__String__copy(
      &(input->pos_altitude), &(output->pos_altitude)))
  {
    return false;
  }
  // turn_yaw
  output->turn_yaw = input->turn_yaw;
  return true;
}

more_interfaces__srv__Comms_Request *
more_interfaces__srv__Comms_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Comms_Request * msg = (more_interfaces__srv__Comms_Request *)allocator.allocate(sizeof(more_interfaces__srv__Comms_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(more_interfaces__srv__Comms_Request));
  bool success = more_interfaces__srv__Comms_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
more_interfaces__srv__Comms_Request__destroy(more_interfaces__srv__Comms_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    more_interfaces__srv__Comms_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
more_interfaces__srv__Comms_Request__Sequence__init(more_interfaces__srv__Comms_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Comms_Request * data = NULL;

  if (size) {
    data = (more_interfaces__srv__Comms_Request *)allocator.zero_allocate(size, sizeof(more_interfaces__srv__Comms_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = more_interfaces__srv__Comms_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        more_interfaces__srv__Comms_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
more_interfaces__srv__Comms_Request__Sequence__fini(more_interfaces__srv__Comms_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      more_interfaces__srv__Comms_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

more_interfaces__srv__Comms_Request__Sequence *
more_interfaces__srv__Comms_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Comms_Request__Sequence * array = (more_interfaces__srv__Comms_Request__Sequence *)allocator.allocate(sizeof(more_interfaces__srv__Comms_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = more_interfaces__srv__Comms_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
more_interfaces__srv__Comms_Request__Sequence__destroy(more_interfaces__srv__Comms_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    more_interfaces__srv__Comms_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
more_interfaces__srv__Comms_Request__Sequence__are_equal(const more_interfaces__srv__Comms_Request__Sequence * lhs, const more_interfaces__srv__Comms_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!more_interfaces__srv__Comms_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
more_interfaces__srv__Comms_Request__Sequence__copy(
  const more_interfaces__srv__Comms_Request__Sequence * input,
  more_interfaces__srv__Comms_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(more_interfaces__srv__Comms_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    more_interfaces__srv__Comms_Request * data =
      (more_interfaces__srv__Comms_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!more_interfaces__srv__Comms_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          more_interfaces__srv__Comms_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!more_interfaces__srv__Comms_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
more_interfaces__srv__Comms_Response__init(more_interfaces__srv__Comms_Response * msg)
{
  if (!msg) {
    return false;
  }
  // connect_success
  return true;
}

void
more_interfaces__srv__Comms_Response__fini(more_interfaces__srv__Comms_Response * msg)
{
  if (!msg) {
    return;
  }
  // connect_success
}

bool
more_interfaces__srv__Comms_Response__are_equal(const more_interfaces__srv__Comms_Response * lhs, const more_interfaces__srv__Comms_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connect_success
  if (lhs->connect_success != rhs->connect_success) {
    return false;
  }
  return true;
}

bool
more_interfaces__srv__Comms_Response__copy(
  const more_interfaces__srv__Comms_Response * input,
  more_interfaces__srv__Comms_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // connect_success
  output->connect_success = input->connect_success;
  return true;
}

more_interfaces__srv__Comms_Response *
more_interfaces__srv__Comms_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Comms_Response * msg = (more_interfaces__srv__Comms_Response *)allocator.allocate(sizeof(more_interfaces__srv__Comms_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(more_interfaces__srv__Comms_Response));
  bool success = more_interfaces__srv__Comms_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
more_interfaces__srv__Comms_Response__destroy(more_interfaces__srv__Comms_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    more_interfaces__srv__Comms_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
more_interfaces__srv__Comms_Response__Sequence__init(more_interfaces__srv__Comms_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Comms_Response * data = NULL;

  if (size) {
    data = (more_interfaces__srv__Comms_Response *)allocator.zero_allocate(size, sizeof(more_interfaces__srv__Comms_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = more_interfaces__srv__Comms_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        more_interfaces__srv__Comms_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
more_interfaces__srv__Comms_Response__Sequence__fini(more_interfaces__srv__Comms_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      more_interfaces__srv__Comms_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

more_interfaces__srv__Comms_Response__Sequence *
more_interfaces__srv__Comms_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Comms_Response__Sequence * array = (more_interfaces__srv__Comms_Response__Sequence *)allocator.allocate(sizeof(more_interfaces__srv__Comms_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = more_interfaces__srv__Comms_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
more_interfaces__srv__Comms_Response__Sequence__destroy(more_interfaces__srv__Comms_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    more_interfaces__srv__Comms_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
more_interfaces__srv__Comms_Response__Sequence__are_equal(const more_interfaces__srv__Comms_Response__Sequence * lhs, const more_interfaces__srv__Comms_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!more_interfaces__srv__Comms_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
more_interfaces__srv__Comms_Response__Sequence__copy(
  const more_interfaces__srv__Comms_Response__Sequence * input,
  more_interfaces__srv__Comms_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(more_interfaces__srv__Comms_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    more_interfaces__srv__Comms_Response * data =
      (more_interfaces__srv__Comms_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!more_interfaces__srv__Comms_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          more_interfaces__srv__Comms_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!more_interfaces__srv__Comms_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
