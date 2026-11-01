# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/Fov.idl
# generated code does not contain a copyright notice

from __future__ import annotations

import collections.abc
import os
import typing

import rosidl_pycommon.interface_base_classes

if typing.TYPE_CHECKING:
    from ctypes import Structure

    class PyCapsule(Structure):
        pass  # don't need to define the full structure


# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
ros_python_check_fields = os.getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'height'
# Member 'roughness'
# Member 'muddiness'
# Member 'wetness'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Fov(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'Fov'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class FovConstants(typing.TypedDict):
        pass

    __constants: FovConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.msg.Fov')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fov
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fov
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fov
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fov
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fov

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Fov(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_Fov):
    """Message class 'Fov'."""

    __slots__ = [
        '_x',
        '_y',
        '_battery',
        '_fov_size',
        '_target_x',
        '_target_y',
        '_target_rad',
        '_height',
        '_roughness',
        '_muddiness',
        '_wetness',
        '_goal_cells',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'x': 'int32',
        'y': 'int32',
        'battery': 'float',
        'fov_size': 'uint32',
        'target_x': 'int32',
        'target_y': 'int32',
        'target_rad': 'int32',
        'height': 'sequence<float>',
        'roughness': 'sequence<float>',
        'muddiness': 'sequence<float>',
        'wetness': 'sequence<float>',
        'goal_cells': 'sequence<boolean>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
    )

    def __init__(self, *,
                 x: typing.Optional[int] = None,  # noqa: E501
                 y: typing.Optional[int] = None,  # noqa: E501
                 battery: typing.Optional[float] = None,  # noqa: E501
                 fov_size: typing.Optional[int] = None,  # noqa: E501
                 target_x: typing.Optional[int] = None,  # noqa: E501
                 target_y: typing.Optional[int] = None,  # noqa: E501
                 target_rad: typing.Optional[int] = None,  # noqa: E501
                 height: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 roughness: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 muddiness: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 wetness: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 goal_cells: typing.Optional[collections.abc.Sequence[bool]] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        self.x = x if x is not None else int()
        self.y = y if y is not None else int()
        self.battery = battery if battery is not None else float()
        self.fov_size = fov_size if fov_size is not None else int()
        self.target_x = target_x if target_x is not None else int()
        self.target_y = target_y if target_y is not None else int()
        self.target_rad = target_rad if target_rad is not None else int()
        self.height = height if height is not None else array.array('f', [])
        self.roughness = roughness if roughness is not None else array.array('f', [])
        self.muddiness = muddiness if muddiness is not None else array.array('f', [])
        self.wetness = wetness if wetness is not None else array.array('f', [])
        self.goal_cells = goal_cells if goal_cells is not None else []

    def __repr__(self) -> str:
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args: list[str] = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    from rosidl_buffer import Buffer as _RosidlBuffer
                    if not isinstance(field, _RosidlBuffer):
                        if self._check_fields:
                            assert fieldstr.startswith('array(')
                        prefix = "array('X', "
                        suffix = ')'
                        fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, Fov):
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.battery != other.battery:
            return False
        if self.fov_size != other.fov_size:
            return False
        if self.target_x != other.target_x:
            return False
        if self.target_y != other.target_y:
            return False
        if self.target_rad != other.target_rad:
            return False
        if self.height != other.height:
            return False
        if self.roughness != other.roughness:
            return False
        if self.muddiness != other.muddiness:
            return False
        if self.wetness != other.wetness:
            return False
        if self.goal_cells != other.goal_cells:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self) -> int:
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'x' field must be of type 'int'"
                assert value >= -2147483648 and value < 2147483648, \
                    "The 'x' field must be an integer in [-2147483648, 2147483647]"

        self._x = value

    @builtins.property
    def y(self) -> int:
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'y' field must be of type 'int'"
                assert value >= -2147483648 and value < 2147483648, \
                    "The 'y' field must be an integer in [-2147483648, 2147483647]"

        self._y = value

    @builtins.property
    def battery(self) -> float:
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'battery' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'battery' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._battery = value

    @builtins.property
    def fov_size(self) -> int:
        """Message field 'fov_size'."""
        return self._fov_size

    @fov_size.setter
    def fov_size(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'fov_size' field must be of type 'int'"
                assert value >= 0 and value < 4294967296, \
                    "The 'fov_size' field must be an unsigned integer in [0, 4294967295]"

        self._fov_size = value

    @builtins.property
    def target_x(self) -> int:
        """Message field 'target_x'."""
        return self._target_x

    @target_x.setter
    def target_x(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'target_x' field must be of type 'int'"
                assert value >= -2147483648 and value < 2147483648, \
                    "The 'target_x' field must be an integer in [-2147483648, 2147483647]"

        self._target_x = value

    @builtins.property
    def target_y(self) -> int:
        """Message field 'target_y'."""
        return self._target_y

    @target_y.setter
    def target_y(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'target_y' field must be of type 'int'"
                assert value >= -2147483648 and value < 2147483648, \
                    "The 'target_y' field must be an integer in [-2147483648, 2147483647]"

        self._target_y = value

    @builtins.property
    def target_rad(self) -> int:
        """Message field 'target_rad'."""
        return self._target_rad

    @target_rad.setter
    def target_rad(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'target_rad' field must be of type 'int'"
                assert value >= -2147483648 and value < 2147483648, \
                    "The 'target_rad' field must be an integer in [-2147483648, 2147483647]"

        self._target_rad = value

    @builtins.property
    def height(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'height' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'height' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._height = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._height = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def roughness(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'roughness'."""
        return self._roughness

    @roughness.setter
    def roughness(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'roughness' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'roughness' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._roughness = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._roughness = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def muddiness(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'muddiness'."""
        return self._muddiness

    @muddiness.setter
    def muddiness(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'muddiness' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'muddiness' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._muddiness = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._muddiness = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def wetness(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'wetness'."""
        return self._wetness

    @wetness.setter
    def wetness(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'wetness' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'wetness' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._wetness = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._wetness = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def goal_cells(self) -> typing.Annotated[typing.Any, list[bool]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'goal_cells'."""
        return self._goal_cells

    @goal_cells.setter
    def goal_cells(self, value: collections.abc.Sequence[bool]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, bool) for v in value) and
                     True), \
                    "The 'goal_cells' field must be sequence and each value of type 'bool'"

        if isinstance(value, list):
            self._goal_cells = value
            return
        self._goal_cells = list(value)
