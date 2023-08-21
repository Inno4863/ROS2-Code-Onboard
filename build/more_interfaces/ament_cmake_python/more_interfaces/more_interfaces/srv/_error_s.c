// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from more_interfaces:srv/Error.idl
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
#include "more_interfaces/srv/detail/error__struct.h"
#include "more_interfaces/srv/detail/error__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool more_interfaces__srv__error__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("more_interfaces.srv._error.Error_Request", full_classname_dest, 40) == 0);
  }
  more_interfaces__srv__Error_Request * ros_message = _ros_message;
  {  // current_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * more_interfaces__srv__error__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Error_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("more_interfaces.srv._error");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Error_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  more_interfaces__srv__Error_Request * ros_message = (more_interfaces__srv__Error_Request *)raw_ros_message;
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "more_interfaces/srv/detail/error__struct.h"
// already included above
// #include "more_interfaces/srv/detail/error__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool more_interfaces__srv__error__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("more_interfaces.srv._error.Error_Response", full_classname_dest, 41) == 0);
  }
  more_interfaces__srv__Error_Response * ros_message = _ros_message;
  {  // desired_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * more_interfaces__srv__error__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Error_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("more_interfaces.srv._error");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Error_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  more_interfaces__srv__Error_Response * ros_message = (more_interfaces__srv__Error_Response *)raw_ros_message;
  {  // desired_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
