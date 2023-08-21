// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from more_interfaces:msg/Trials1.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "more_interfaces/msg/detail/trials1__struct.h"
#include "more_interfaces/msg/detail/trials1__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool more_interfaces__msg__trials1__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("more_interfaces.msg._trials1.Trials1", full_classname_dest, 36) == 0);
  }
  more_interfaces__msg__Trials1 * ros_message = _ros_message;
  {  // is_in_air
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_in_air");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_in_air = (Py_True == field);
    Py_DECREF(field);
  }
  {  // armed
    PyObject * field = PyObject_GetAttrString(_pymsg, "armed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->armed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_percentage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_altitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rel_altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rel_altitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_satellites
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_satellites");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_satellites = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // landed_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "landed_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->landed_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // velocity_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drone_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drone_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mission_done
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_done");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mission_done = (Py_True == field);
    Py_DECREF(field);
  }
  {  // current_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flight_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "flight_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flight_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * more_interfaces__msg__trials1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Trials1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("more_interfaces.msg._trials1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Trials1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  more_interfaces__msg__Trials1 * ros_message = (more_interfaces__msg__Trials1 *)raw_ros_message;
  {  // is_in_air
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_in_air ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_in_air", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->armed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rel_altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rel_altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_satellites
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gps_satellites);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_satellites", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // landed_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->landed_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "landed_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drone_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->drone_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_done
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mission_done ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_done", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flight_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->flight_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flight_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
