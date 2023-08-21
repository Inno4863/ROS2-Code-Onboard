# generated from rosidl_generator_py/resource/_idl.py.em
# with input from more_interfaces:srv/Alert.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Alert_Request(type):
    """Metaclass of message 'Alert_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('more_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'more_interfaces.srv.Alert_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__alert__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__alert__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__alert__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__alert__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__alert__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Alert_Request(metaclass=Metaclass_Alert_Request):
    """Message class 'Alert_Request'."""

    __slots__ = [
        '_alert_trigger',
        '_waypoints',
        '_execute_action',
        '_mission_id',
    ]

    _fields_and_field_types = {
        'alert_trigger': 'boolean',
        'waypoints': 'sequence<string>',
        'execute_action': 'string',
        'mission_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.alert_trigger = kwargs.get('alert_trigger', bool())
        self.waypoints = kwargs.get('waypoints', [])
        self.execute_action = kwargs.get('execute_action', str())
        self.mission_id = kwargs.get('mission_id', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.alert_trigger != other.alert_trigger:
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.execute_action != other.execute_action:
            return False
        if self.mission_id != other.mission_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def alert_trigger(self):
        """Message field 'alert_trigger'."""
        return self._alert_trigger

    @alert_trigger.setter
    def alert_trigger(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'alert_trigger' field must be of type 'bool'"
        self._alert_trigger = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'str'"
        self._waypoints = value

    @builtins.property
    def execute_action(self):
        """Message field 'execute_action'."""
        return self._execute_action

    @execute_action.setter
    def execute_action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'execute_action' field must be of type 'str'"
        self._execute_action = value

    @builtins.property
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission_id' field must be of type 'str'"
        self._mission_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Alert_Response(type):
    """Metaclass of message 'Alert_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('more_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'more_interfaces.srv.Alert_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__alert__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__alert__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__alert__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__alert__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__alert__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Alert_Response(metaclass=Metaclass_Alert_Response):
    """Message class 'Alert_Response'."""

    __slots__ = [
        '_success_trigger',
    ]

    _fields_and_field_types = {
        'success_trigger': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success_trigger = kwargs.get('success_trigger', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success_trigger != other.success_trigger:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success_trigger(self):
        """Message field 'success_trigger'."""
        return self._success_trigger

    @success_trigger.setter
    def success_trigger(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success_trigger' field must be of type 'bool'"
        self._success_trigger = value


class Metaclass_Alert(type):
    """Metaclass of service 'Alert'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('more_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'more_interfaces.srv.Alert')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__alert

            from more_interfaces.srv import _alert
            if _alert.Metaclass_Alert_Request._TYPE_SUPPORT is None:
                _alert.Metaclass_Alert_Request.__import_type_support__()
            if _alert.Metaclass_Alert_Response._TYPE_SUPPORT is None:
                _alert.Metaclass_Alert_Response.__import_type_support__()


class Alert(metaclass=Metaclass_Alert):
    from more_interfaces.srv._alert import Alert_Request as Request
    from more_interfaces.srv._alert import Alert_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
