# generated from rosidl_generator_py/resource/_idl.py.em
# with input from more_interfaces:srv/Comms.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Comms_Request(type):
    """Metaclass of message 'Comms_Request'."""

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
                'more_interfaces.srv.Comms_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__comms__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__comms__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__comms__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__comms__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__comms__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Comms_Request(metaclass=Metaclass_Comms_Request):
    """Message class 'Comms_Request'."""

    __slots__ = [
        '_trigger',
        '_message',
        '_pos_longitude',
        '_pos_latitude',
        '_pos_altitude',
        '_turn_yaw',
    ]

    _fields_and_field_types = {
        'trigger': 'boolean',
        'message': 'string',
        'pos_longitude': 'string',
        'pos_latitude': 'string',
        'pos_altitude': 'string',
        'turn_yaw': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.trigger = kwargs.get('trigger', bool())
        self.message = kwargs.get('message', str())
        self.pos_longitude = kwargs.get('pos_longitude', str())
        self.pos_latitude = kwargs.get('pos_latitude', str())
        self.pos_altitude = kwargs.get('pos_altitude', str())
        self.turn_yaw = kwargs.get('turn_yaw', float())

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
        if self.trigger != other.trigger:
            return False
        if self.message != other.message:
            return False
        if self.pos_longitude != other.pos_longitude:
            return False
        if self.pos_latitude != other.pos_latitude:
            return False
        if self.pos_altitude != other.pos_altitude:
            return False
        if self.turn_yaw != other.turn_yaw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def trigger(self):
        """Message field 'trigger'."""
        return self._trigger

    @trigger.setter
    def trigger(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trigger' field must be of type 'bool'"
        self._trigger = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def pos_longitude(self):
        """Message field 'pos_longitude'."""
        return self._pos_longitude

    @pos_longitude.setter
    def pos_longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pos_longitude' field must be of type 'str'"
        self._pos_longitude = value

    @builtins.property
    def pos_latitude(self):
        """Message field 'pos_latitude'."""
        return self._pos_latitude

    @pos_latitude.setter
    def pos_latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pos_latitude' field must be of type 'str'"
        self._pos_latitude = value

    @builtins.property
    def pos_altitude(self):
        """Message field 'pos_altitude'."""
        return self._pos_altitude

    @pos_altitude.setter
    def pos_altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pos_altitude' field must be of type 'str'"
        self._pos_altitude = value

    @builtins.property
    def turn_yaw(self):
        """Message field 'turn_yaw'."""
        return self._turn_yaw

    @turn_yaw.setter
    def turn_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turn_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turn_yaw = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Comms_Response(type):
    """Metaclass of message 'Comms_Response'."""

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
                'more_interfaces.srv.Comms_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__comms__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__comms__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__comms__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__comms__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__comms__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Comms_Response(metaclass=Metaclass_Comms_Response):
    """Message class 'Comms_Response'."""

    __slots__ = [
        '_connect_success',
    ]

    _fields_and_field_types = {
        'connect_success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.connect_success = kwargs.get('connect_success', bool())

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
        if self.connect_success != other.connect_success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def connect_success(self):
        """Message field 'connect_success'."""
        return self._connect_success

    @connect_success.setter
    def connect_success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connect_success' field must be of type 'bool'"
        self._connect_success = value


class Metaclass_Comms(type):
    """Metaclass of service 'Comms'."""

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
                'more_interfaces.srv.Comms')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__comms

            from more_interfaces.srv import _comms
            if _comms.Metaclass_Comms_Request._TYPE_SUPPORT is None:
                _comms.Metaclass_Comms_Request.__import_type_support__()
            if _comms.Metaclass_Comms_Response._TYPE_SUPPORT is None:
                _comms.Metaclass_Comms_Response.__import_type_support__()


class Comms(metaclass=Metaclass_Comms):
    from more_interfaces.srv._comms import Comms_Request as Request
    from more_interfaces.srv._comms import Comms_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
