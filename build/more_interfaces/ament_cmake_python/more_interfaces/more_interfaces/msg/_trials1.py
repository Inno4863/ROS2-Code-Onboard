# generated from rosidl_generator_py/resource/_idl.py.em
# with input from more_interfaces:msg/Trials1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trials1(type):
    """Metaclass of message 'Trials1'."""

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
                'more_interfaces.msg.Trials1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trials1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trials1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trials1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trials1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trials1

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Trials1(metaclass=Metaclass_Trials1):
    """Message class 'Trials1'."""

    __slots__ = [
        '_is_in_air',
        '_armed',
        '_battery_percentage',
        '_pos_latitude',
        '_pos_longitude',
        '_pos_altitude',
        '_rel_altitude',
        '_gps_satellites',
        '_landed_state',
        '_velocity_x',
        '_velocity_y',
        '_velocity_z',
        '_drone_id',
        '_mission_done',
        '_current_yaw',
        '_flight_mode',
    ]

    _fields_and_field_types = {
        'is_in_air': 'boolean',
        'armed': 'boolean',
        'battery_percentage': 'double',
        'pos_latitude': 'double',
        'pos_longitude': 'double',
        'pos_altitude': 'float',
        'rel_altitude': 'float',
        'gps_satellites': 'int32',
        'landed_state': 'int32',
        'velocity_x': 'double',
        'velocity_y': 'double',
        'velocity_z': 'double',
        'drone_id': 'int32',
        'mission_done': 'boolean',
        'current_yaw': 'double',
        'flight_mode': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_in_air = kwargs.get('is_in_air', bool())
        self.armed = kwargs.get('armed', bool())
        self.battery_percentage = kwargs.get('battery_percentage', float())
        self.pos_latitude = kwargs.get('pos_latitude', float())
        self.pos_longitude = kwargs.get('pos_longitude', float())
        self.pos_altitude = kwargs.get('pos_altitude', float())
        self.rel_altitude = kwargs.get('rel_altitude', float())
        self.gps_satellites = kwargs.get('gps_satellites', int())
        self.landed_state = kwargs.get('landed_state', int())
        self.velocity_x = kwargs.get('velocity_x', float())
        self.velocity_y = kwargs.get('velocity_y', float())
        self.velocity_z = kwargs.get('velocity_z', float())
        self.drone_id = kwargs.get('drone_id', int())
        self.mission_done = kwargs.get('mission_done', bool())
        self.current_yaw = kwargs.get('current_yaw', float())
        self.flight_mode = kwargs.get('flight_mode', int())

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
        if self.is_in_air != other.is_in_air:
            return False
        if self.armed != other.armed:
            return False
        if self.battery_percentage != other.battery_percentage:
            return False
        if self.pos_latitude != other.pos_latitude:
            return False
        if self.pos_longitude != other.pos_longitude:
            return False
        if self.pos_altitude != other.pos_altitude:
            return False
        if self.rel_altitude != other.rel_altitude:
            return False
        if self.gps_satellites != other.gps_satellites:
            return False
        if self.landed_state != other.landed_state:
            return False
        if self.velocity_x != other.velocity_x:
            return False
        if self.velocity_y != other.velocity_y:
            return False
        if self.velocity_z != other.velocity_z:
            return False
        if self.drone_id != other.drone_id:
            return False
        if self.mission_done != other.mission_done:
            return False
        if self.current_yaw != other.current_yaw:
            return False
        if self.flight_mode != other.flight_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_in_air(self):
        """Message field 'is_in_air'."""
        return self._is_in_air

    @is_in_air.setter
    def is_in_air(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_in_air' field must be of type 'bool'"
        self._is_in_air = value

    @builtins.property
    def armed(self):
        """Message field 'armed'."""
        return self._armed

    @armed.setter
    def armed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'armed' field must be of type 'bool'"
        self._armed = value

    @builtins.property
    def battery_percentage(self):
        """Message field 'battery_percentage'."""
        return self._battery_percentage

    @battery_percentage.setter
    def battery_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_percentage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_percentage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_percentage = value

    @builtins.property
    def pos_latitude(self):
        """Message field 'pos_latitude'."""
        return self._pos_latitude

    @pos_latitude.setter
    def pos_latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_latitude = value

    @builtins.property
    def pos_longitude(self):
        """Message field 'pos_longitude'."""
        return self._pos_longitude

    @pos_longitude.setter
    def pos_longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_longitude = value

    @builtins.property
    def pos_altitude(self):
        """Message field 'pos_altitude'."""
        return self._pos_altitude

    @pos_altitude.setter
    def pos_altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_altitude = value

    @builtins.property
    def rel_altitude(self):
        """Message field 'rel_altitude'."""
        return self._rel_altitude

    @rel_altitude.setter
    def rel_altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rel_altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rel_altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rel_altitude = value

    @builtins.property
    def gps_satellites(self):
        """Message field 'gps_satellites'."""
        return self._gps_satellites

    @gps_satellites.setter
    def gps_satellites(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_satellites' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gps_satellites' field must be an integer in [-2147483648, 2147483647]"
        self._gps_satellites = value

    @builtins.property
    def landed_state(self):
        """Message field 'landed_state'."""
        return self._landed_state

    @landed_state.setter
    def landed_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'landed_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'landed_state' field must be an integer in [-2147483648, 2147483647]"
        self._landed_state = value

    @builtins.property
    def velocity_x(self):
        """Message field 'velocity_x'."""
        return self._velocity_x

    @velocity_x.setter
    def velocity_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity_x = value

    @builtins.property
    def velocity_y(self):
        """Message field 'velocity_y'."""
        return self._velocity_y

    @velocity_y.setter
    def velocity_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity_y = value

    @builtins.property
    def velocity_z(self):
        """Message field 'velocity_z'."""
        return self._velocity_z

    @velocity_z.setter
    def velocity_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity_z = value

    @builtins.property
    def drone_id(self):
        """Message field 'drone_id'."""
        return self._drone_id

    @drone_id.setter
    def drone_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drone_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'drone_id' field must be an integer in [-2147483648, 2147483647]"
        self._drone_id = value

    @builtins.property
    def mission_done(self):
        """Message field 'mission_done'."""
        return self._mission_done

    @mission_done.setter
    def mission_done(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mission_done' field must be of type 'bool'"
        self._mission_done = value

    @builtins.property
    def current_yaw(self):
        """Message field 'current_yaw'."""
        return self._current_yaw

    @current_yaw.setter
    def current_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_yaw = value

    @builtins.property
    def flight_mode(self):
        """Message field 'flight_mode'."""
        return self._flight_mode

    @flight_mode.setter
    def flight_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flight_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'flight_mode' field must be an integer in [-2147483648, 2147483647]"
        self._flight_mode = value
