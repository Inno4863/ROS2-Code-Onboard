// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from more_interfaces:msg/Trials1.idl
// generated code does not contain a copyright notice
#include "more_interfaces/msg/detail/trials1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
more_interfaces__msg__Trials1__init(more_interfaces__msg__Trials1 * msg)
{
  if (!msg) {
    return false;
  }
  // is_in_air
  // armed
  // battery_percentage
  // pos_latitude
  // pos_longitude
  // pos_altitude
  // rel_altitude
  // gps_satellites
  // landed_state
  // velocity_x
  // velocity_y
  // velocity_z
  // drone_id
  // mission_done
  // current_yaw
  // flight_mode
  return true;
}

void
more_interfaces__msg__Trials1__fini(more_interfaces__msg__Trials1 * msg)
{
  if (!msg) {
    return;
  }
  // is_in_air
  // armed
  // battery_percentage
  // pos_latitude
  // pos_longitude
  // pos_altitude
  // rel_altitude
  // gps_satellites
  // landed_state
  // velocity_x
  // velocity_y
  // velocity_z
  // drone_id
  // mission_done
  // current_yaw
  // flight_mode
}

bool
more_interfaces__msg__Trials1__are_equal(const more_interfaces__msg__Trials1 * lhs, const more_interfaces__msg__Trials1 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_in_air
  if (lhs->is_in_air != rhs->is_in_air) {
    return false;
  }
  // armed
  if (lhs->armed != rhs->armed) {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // pos_latitude
  if (lhs->pos_latitude != rhs->pos_latitude) {
    return false;
  }
  // pos_longitude
  if (lhs->pos_longitude != rhs->pos_longitude) {
    return false;
  }
  // pos_altitude
  if (lhs->pos_altitude != rhs->pos_altitude) {
    return false;
  }
  // rel_altitude
  if (lhs->rel_altitude != rhs->rel_altitude) {
    return false;
  }
  // gps_satellites
  if (lhs->gps_satellites != rhs->gps_satellites) {
    return false;
  }
  // landed_state
  if (lhs->landed_state != rhs->landed_state) {
    return false;
  }
  // velocity_x
  if (lhs->velocity_x != rhs->velocity_x) {
    return false;
  }
  // velocity_y
  if (lhs->velocity_y != rhs->velocity_y) {
    return false;
  }
  // velocity_z
  if (lhs->velocity_z != rhs->velocity_z) {
    return false;
  }
  // drone_id
  if (lhs->drone_id != rhs->drone_id) {
    return false;
  }
  // mission_done
  if (lhs->mission_done != rhs->mission_done) {
    return false;
  }
  // current_yaw
  if (lhs->current_yaw != rhs->current_yaw) {
    return false;
  }
  // flight_mode
  if (lhs->flight_mode != rhs->flight_mode) {
    return false;
  }
  return true;
}

bool
more_interfaces__msg__Trials1__copy(
  const more_interfaces__msg__Trials1 * input,
  more_interfaces__msg__Trials1 * output)
{
  if (!input || !output) {
    return false;
  }
  // is_in_air
  output->is_in_air = input->is_in_air;
  // armed
  output->armed = input->armed;
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // pos_latitude
  output->pos_latitude = input->pos_latitude;
  // pos_longitude
  output->pos_longitude = input->pos_longitude;
  // pos_altitude
  output->pos_altitude = input->pos_altitude;
  // rel_altitude
  output->rel_altitude = input->rel_altitude;
  // gps_satellites
  output->gps_satellites = input->gps_satellites;
  // landed_state
  output->landed_state = input->landed_state;
  // velocity_x
  output->velocity_x = input->velocity_x;
  // velocity_y
  output->velocity_y = input->velocity_y;
  // velocity_z
  output->velocity_z = input->velocity_z;
  // drone_id
  output->drone_id = input->drone_id;
  // mission_done
  output->mission_done = input->mission_done;
  // current_yaw
  output->current_yaw = input->current_yaw;
  // flight_mode
  output->flight_mode = input->flight_mode;
  return true;
}

more_interfaces__msg__Trials1 *
more_interfaces__msg__Trials1__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__msg__Trials1 * msg = (more_interfaces__msg__Trials1 *)allocator.allocate(sizeof(more_interfaces__msg__Trials1), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(more_interfaces__msg__Trials1));
  bool success = more_interfaces__msg__Trials1__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
more_interfaces__msg__Trials1__destroy(more_interfaces__msg__Trials1 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    more_interfaces__msg__Trials1__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
more_interfaces__msg__Trials1__Sequence__init(more_interfaces__msg__Trials1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__msg__Trials1 * data = NULL;

  if (size) {
    data = (more_interfaces__msg__Trials1 *)allocator.zero_allocate(size, sizeof(more_interfaces__msg__Trials1), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = more_interfaces__msg__Trials1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        more_interfaces__msg__Trials1__fini(&data[i - 1]);
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
more_interfaces__msg__Trials1__Sequence__fini(more_interfaces__msg__Trials1__Sequence * array)
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
      more_interfaces__msg__Trials1__fini(&array->data[i]);
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

more_interfaces__msg__Trials1__Sequence *
more_interfaces__msg__Trials1__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__msg__Trials1__Sequence * array = (more_interfaces__msg__Trials1__Sequence *)allocator.allocate(sizeof(more_interfaces__msg__Trials1__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = more_interfaces__msg__Trials1__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
more_interfaces__msg__Trials1__Sequence__destroy(more_interfaces__msg__Trials1__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    more_interfaces__msg__Trials1__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
more_interfaces__msg__Trials1__Sequence__are_equal(const more_interfaces__msg__Trials1__Sequence * lhs, const more_interfaces__msg__Trials1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!more_interfaces__msg__Trials1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
more_interfaces__msg__Trials1__Sequence__copy(
  const more_interfaces__msg__Trials1__Sequence * input,
  more_interfaces__msg__Trials1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(more_interfaces__msg__Trials1);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    more_interfaces__msg__Trials1 * data =
      (more_interfaces__msg__Trials1 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!more_interfaces__msg__Trials1__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          more_interfaces__msg__Trials1__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!more_interfaces__msg__Trials1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
