# generated from rosidl_generator_py/resource/_idl.py.em
# with input from more_interfaces:srv/Arduino1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Arduino1_Request(type):
    """Metaclass of message 'Arduino1_Request'."""

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
                'more_interfaces.srv.Arduino1_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arduino1__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arduino1__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arduino1__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arduino1__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arduino1__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Arduino1_Request(metaclass=Metaclass_Arduino1_Request):
    """Message class 'Arduino1_Request'."""

    __slots__ = [
        '_message',
        '_mission_id',
        '_trigger',
    ]

    _fields_and_field_types = {
        'message': 'string',
        'mission_id': 'string',
        'trigger': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())
        self.mission_id = kwargs.get('mission_id', str())
        self.trigger = kwargs.get('trigger', bool())

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
        if self.message != other.message:
            return False
        if self.mission_id != other.mission_id:
            return False
        if self.trigger != other.trigger:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Arduino1_Response(type):
    """Metaclass of message 'Arduino1_Response'."""

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
                'more_interfaces.srv.Arduino1_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arduino1__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arduino1__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arduino1__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arduino1__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arduino1__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Arduino1_Response(metaclass=Metaclass_Arduino1_Response):
    """Message class 'Arduino1_Response'."""

    __slots__ = [
        '_outcome',
        '_outcome2',
    ]

    _fields_and_field_types = {
        'outcome': 'boolean',
        'outcome2': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.outcome = kwargs.get('outcome', bool())
        self.outcome2 = kwargs.get('outcome2', str())

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
        if self.outcome != other.outcome:
            return False
        if self.outcome2 != other.outcome2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def outcome(self):
        """Message field 'outcome'."""
        return self._outcome

    @outcome.setter
    def outcome(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'outcome' field must be of type 'bool'"
        self._outcome = value

    @builtins.property
    def outcome2(self):
        """Message field 'outcome2'."""
        return self._outcome2

    @outcome2.setter
    def outcome2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'outcome2' field must be of type 'str'"
        self._outcome2 = value


class Metaclass_Arduino1(type):
    """Metaclass of service 'Arduino1'."""

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
                'more_interfaces.srv.Arduino1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__arduino1

            from more_interfaces.srv import _arduino1
            if _arduino1.Metaclass_Arduino1_Request._TYPE_SUPPORT is None:
                _arduino1.Metaclass_Arduino1_Request.__import_type_support__()
            if _arduino1.Metaclass_Arduino1_Response._TYPE_SUPPORT is None:
                _arduino1.Metaclass_Arduino1_Response.__import_type_support__()


class Arduino1(metaclass=Metaclass_Arduino1):
    from more_interfaces.srv._arduino1 import Arduino1_Request as Request
    from more_interfaces.srv._arduino1 import Arduino1_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
