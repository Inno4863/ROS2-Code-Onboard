// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from more_interfaces:srv/Arduino1.idl
// generated code does not contain a copyright notice
#include "more_interfaces/srv/detail/arduino1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `message`
// Member `mission_id`
#include "rosidl_runtime_c/string_functions.h"

bool
more_interfaces__srv__Arduino1_Request__init(more_interfaces__srv__Arduino1_Request * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    more_interfaces__srv__Arduino1_Request__fini(msg);
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    more_interfaces__srv__Arduino1_Request__fini(msg);
    return false;
  }
  // trigger
  return true;
}

void
more_interfaces__srv__Arduino1_Request__fini(more_interfaces__srv__Arduino1_Request * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // trigger
}

bool
more_interfaces__srv__Arduino1_Request__are_equal(const more_interfaces__srv__Arduino1_Request * lhs, const more_interfaces__srv__Arduino1_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // trigger
  if (lhs->trigger != rhs->trigger) {
    return false;
  }
  return true;
}

bool
more_interfaces__srv__Arduino1_Request__copy(
  const more_interfaces__srv__Arduino1_Request * input,
  more_interfaces__srv__Arduino1_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // trigger
  output->trigger = input->trigger;
  return true;
}

more_interfaces__srv__Arduino1_Request *
more_interfaces__srv__Arduino1_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Arduino1_Request * msg = (more_interfaces__srv__Arduino1_Request *)allocator.allocate(sizeof(more_interfaces__srv__Arduino1_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(more_interfaces__srv__Arduino1_Request));
  bool success = more_interfaces__srv__Arduino1_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
more_interfaces__srv__Arduino1_Request__destroy(more_interfaces__srv__Arduino1_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    more_interfaces__srv__Arduino1_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
more_interfaces__srv__Arduino1_Request__Sequence__init(more_interfaces__srv__Arduino1_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Arduino1_Request * data = NULL;

  if (size) {
    data = (more_interfaces__srv__Arduino1_Request *)allocator.zero_allocate(size, sizeof(more_interfaces__srv__Arduino1_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = more_interfaces__srv__Arduino1_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        more_interfaces__srv__Arduino1_Request__fini(&data[i - 1]);
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
more_interfaces__srv__Arduino1_Request__Sequence__fini(more_interfaces__srv__Arduino1_Request__Sequence * array)
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
      more_interfaces__srv__Arduino1_Request__fini(&array->data[i]);
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

more_interfaces__srv__Arduino1_Request__Sequence *
more_interfaces__srv__Arduino1_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Arduino1_Request__Sequence * array = (more_interfaces__srv__Arduino1_Request__Sequence *)allocator.allocate(sizeof(more_interfaces__srv__Arduino1_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = more_interfaces__srv__Arduino1_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
more_interfaces__srv__Arduino1_Request__Sequence__destroy(more_interfaces__srv__Arduino1_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    more_interfaces__srv__Arduino1_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
more_interfaces__srv__Arduino1_Request__Sequence__are_equal(const more_interfaces__srv__Arduino1_Request__Sequence * lhs, const more_interfaces__srv__Arduino1_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!more_interfaces__srv__Arduino1_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
more_interfaces__srv__Arduino1_Request__Sequence__copy(
  const more_interfaces__srv__Arduino1_Request__Sequence * input,
  more_interfaces__srv__Arduino1_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(more_interfaces__srv__Arduino1_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    more_interfaces__srv__Arduino1_Request * data =
      (more_interfaces__srv__Arduino1_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!more_interfaces__srv__Arduino1_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          more_interfaces__srv__Arduino1_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!more_interfaces__srv__Arduino1_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `outcome2`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
more_interfaces__srv__Arduino1_Response__init(more_interfaces__srv__Arduino1_Response * msg)
{
  if (!msg) {
    return false;
  }
  // outcome
  // outcome2
  if (!rosidl_runtime_c__String__init(&msg->outcome2)) {
    more_interfaces__srv__Arduino1_Response__fini(msg);
    return false;
  }
  return true;
}

void
more_interfaces__srv__Arduino1_Response__fini(more_interfaces__srv__Arduino1_Response * msg)
{
  if (!msg) {
    return;
  }
  // outcome
  // outcome2
  rosidl_runtime_c__String__fini(&msg->outcome2);
}

bool
more_interfaces__srv__Arduino1_Response__are_equal(const more_interfaces__srv__Arduino1_Response * lhs, const more_interfaces__srv__Arduino1_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // outcome
  if (lhs->outcome != rhs->outcome) {
    return false;
  }
  // outcome2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->outcome2), &(rhs->outcome2)))
  {
    return false;
  }
  return true;
}

bool
more_interfaces__srv__Arduino1_Response__copy(
  const more_interfaces__srv__Arduino1_Response * input,
  more_interfaces__srv__Arduino1_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // outcome
  output->outcome = input->outcome;
  // outcome2
  if (!rosidl_runtime_c__String__copy(
      &(input->outcome2), &(output->outcome2)))
  {
    return false;
  }
  return true;
}

more_interfaces__srv__Arduino1_Response *
more_interfaces__srv__Arduino1_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Arduino1_Response * msg = (more_interfaces__srv__Arduino1_Response *)allocator.allocate(sizeof(more_interfaces__srv__Arduino1_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(more_interfaces__srv__Arduino1_Response));
  bool success = more_interfaces__srv__Arduino1_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
more_interfaces__srv__Arduino1_Response__destroy(more_interfaces__srv__Arduino1_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    more_interfaces__srv__Arduino1_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
more_interfaces__srv__Arduino1_Response__Sequence__init(more_interfaces__srv__Arduino1_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Arduino1_Response * data = NULL;

  if (size) {
    data = (more_interfaces__srv__Arduino1_Response *)allocator.zero_allocate(size, sizeof(more_interfaces__srv__Arduino1_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = more_interfaces__srv__Arduino1_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        more_interfaces__srv__Arduino1_Response__fini(&data[i - 1]);
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
more_interfaces__srv__Arduino1_Response__Sequence__fini(more_interfaces__srv__Arduino1_Response__Sequence * array)
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
      more_interfaces__srv__Arduino1_Response__fini(&array->data[i]);
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

more_interfaces__srv__Arduino1_Response__Sequence *
more_interfaces__srv__Arduino1_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__srv__Arduino1_Response__Sequence * array = (more_interfaces__srv__Arduino1_Response__Sequence *)allocator.allocate(sizeof(more_interfaces__srv__Arduino1_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = more_interfaces__srv__Arduino1_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
more_interfaces__srv__Arduino1_Response__Sequence__destroy(more_interfaces__srv__Arduino1_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    more_interfaces__srv__Arduino1_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
more_interfaces__srv__Arduino1_Response__Sequence__are_equal(const more_interfaces__srv__Arduino1_Response__Sequence * lhs, const more_interfaces__srv__Arduino1_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!more_interfaces__srv__Arduino1_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
more_interfaces__srv__Arduino1_Response__Sequence__copy(
  const more_interfaces__srv__Arduino1_Response__Sequence * input,
  more_interfaces__srv__Arduino1_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(more_interfaces__srv__Arduino1_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    more_interfaces__srv__Arduino1_Response * data =
      (more_interfaces__srv__Arduino1_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!more_interfaces__srv__Arduino1_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          more_interfaces__srv__Arduino1_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!more_interfaces__srv__Arduino1_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
