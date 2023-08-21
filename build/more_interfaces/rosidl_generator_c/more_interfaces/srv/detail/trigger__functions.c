// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from more_interfaces:srv/Trigger.idl
// generated code does not contain a copyright notice
#include "more_interfaces/srv/detail/trigger__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mission_id`
#include "rosidl_runtime_c/string_functions.h"

bool
more_interfaces__srv__Trigger_Request__init(more_interfaces__srv__Trigger_Request * msg)
{
  if (!msg) {
    return false;
  }
  // trigger
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    more_interfaces__srv__Trigger_Request__fini(msg);
    return false;
  }
  return true;
}

void
more_interfaces__srv__Trigger_Request__fini(more_interfaces__srv__Trigger_Request * msg)
{
  if (!msg) {
    return;
  }
  // trigger
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
}

bool
more_interfaces__srv__Trigger_Request__are_equal(const more_interfaces__srv__Trigger_Request * lhs, const more_interfaces__srv__Trigger_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trigger
  if (lhs->trigger != rhs->trigger) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  return true;
}

bool
more_interfaces__srv__Trigger_Request__copy(
  const more_interfaces__srv__Trigger_Request * input,
  more_interfaces__srv__Trigger_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // trigger
  output->trigger = input->trigger;
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  return true;
}

more_interfaces__srv__Trigger_Request *
more_interfaces__srv__Trigger_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Trigger_Request * msg = (more_interfaces__srv__Trigger_Request *)allocator.allocate(sizeof(more_interfaces__srv__Trigger_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(more_interfaces__srv__Trigger_Request));
  bool success = more_interfaces__srv__Trigger_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
more_interfaces__srv__Trigger_Request__destroy(more_interfaces__srv__Trigger_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    more_interfaces__srv__Trigger_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
more_interfaces__srv__Trigger_Request__Sequence__init(more_interfaces__srv__Trigger_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Trigger_Request * data = NULL;

  if (size) {
    data = (more_interfaces__srv__Trigger_Request *)allocator.zero_allocate(size, sizeof(more_interfaces__srv__Trigger_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = more_interfaces__srv__Trigger_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        more_interfaces__srv__Trigger_Request__fini(&data[i - 1]);
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
more_interfaces__srv__Trigger_Request__Sequence__fini(more_interfaces__srv__Trigger_Request__Sequence * array)
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
      more_interfaces__srv__Trigger_Request__fini(&array->data[i]);
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

more_interfaces__srv__Trigger_Request__Sequence *
more_interfaces__srv__Trigger_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Trigger_Request__Sequence * array = (more_interfaces__srv__Trigger_Request__Sequence *)allocator.allocate(sizeof(more_interfaces__srv__Trigger_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = more_interfaces__srv__Trigger_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
more_interfaces__srv__Trigger_Request__Sequence__destroy(more_interfaces__srv__Trigger_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    more_interfaces__srv__Trigger_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
more_interfaces__srv__Trigger_Request__Sequence__are_equal(const more_interfaces__srv__Trigger_Request__Sequence * lhs, const more_interfaces__srv__Trigger_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!more_interfaces__srv__Trigger_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
more_interfaces__srv__Trigger_Request__Sequence__copy(
  const more_interfaces__srv__Trigger_Request__Sequence * input,
  more_interfaces__srv__Trigger_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(more_interfaces__srv__Trigger_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    more_interfaces__srv__Trigger_Request * data =
      (more_interfaces__srv__Trigger_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!more_interfaces__srv__Trigger_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          more_interfaces__srv__Trigger_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!more_interfaces__srv__Trigger_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
more_interfaces__srv__Trigger_Response__init(more_interfaces__srv__Trigger_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
more_interfaces__srv__Trigger_Response__fini(more_interfaces__srv__Trigger_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
more_interfaces__srv__Trigger_Response__are_equal(const more_interfaces__srv__Trigger_Response * lhs, const more_interfaces__srv__Trigger_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
more_interfaces__srv__Trigger_Response__copy(
  const more_interfaces__srv__Trigger_Response * input,
  more_interfaces__srv__Trigger_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

more_interfaces__srv__Trigger_Response *
more_interfaces__srv__Trigger_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Trigger_Response * msg = (more_interfaces__srv__Trigger_Response *)allocator.allocate(sizeof(more_interfaces__srv__Trigger_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(more_interfaces__srv__Trigger_Response));
  bool success = more_interfaces__srv__Trigger_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
more_interfaces__srv__Trigger_Response__destroy(more_interfaces__srv__Trigger_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    more_interfaces__srv__Trigger_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
more_interfaces__srv__Trigger_Response__Sequence__init(more_interfaces__srv__Trigger_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Trigger_Response * data = NULL;

  if (size) {
    data = (more_interfaces__srv__Trigger_Response *)allocator.zero_allocate(size, sizeof(more_interfaces__srv__Trigger_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = more_interfaces__srv__Trigger_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        more_interfaces__srv__Trigger_Response__fini(&data[i - 1]);
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
more_interfaces__srv__Trigger_Response__Sequence__fini(more_interfaces__srv__Trigger_Response__Sequence * array)
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
      more_interfaces__srv__Trigger_Response__fini(&array->data[i]);
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

more_interfaces__srv__Trigger_Response__Sequence *
more_interfaces__srv__Trigger_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Trigger_Response__Sequence * array = (more_interfaces__srv__Trigger_Response__Sequence *)allocator.allocate(sizeof(more_interfaces__srv__Trigger_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = more_interfaces__srv__Trigger_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
more_interfaces__srv__Trigger_Response__Sequence__destroy(more_interfaces__srv__Trigger_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    more_interfaces__srv__Trigger_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
more_interfaces__srv__Trigger_Response__Sequence__are_equal(const more_interfaces__srv__Trigger_Response__Sequence * lhs, const more_interfaces__srv__Trigger_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!more_interfaces__srv__Trigger_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
more_interfaces__srv__Trigger_Response__Sequence__copy(
  const more_interfaces__srv__Trigger_Response__Sequence * input,
  more_interfaces__srv__Trigger_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(more_interfaces__srv__Trigger_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    more_interfaces__srv__Trigger_Response * data =
      (more_interfaces__srv__Trigger_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!more_interfaces__srv__Trigger_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          more_interfaces__srv__Trigger_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!more_interfaces__srv__Trigger_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
