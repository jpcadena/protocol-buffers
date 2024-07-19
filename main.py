"""
This module contains functions to demonstrate the usage of Protocol Buffers in
 Python.
It includes examples of creating, manipulating, and serializing different types
 of Protocol Buffer messages such as simple messages, complex messages,
  enumerations, oneof fields, and maps. It also includes functions to convert
   Protocol Buffer messages to JSON and back.
"""

from typing import Any

import google.protobuf.json_format as json_format
from google.protobuf.message import Message

import proto.complex_pb2 as complex_pb2
import proto.enumerations_pb2 as enum_pb2

import proto.maps_pb2 as maps_pb2
import proto.oneofs_pb2 as oneofs_pb2
import proto.simple_pb2 as simple_pb2


def simple() -> Message:
    """
    Creates and returns a Simple protocol buffer message.
    :return: A Simple message.
    :rtype: Message
    """
    return simple_pb2.Simple(
        id=42, is_simple=True, name="My name", sample_lists=[3, 4, 5]
    )


def complex() -> Message:
    """
    Creates and returns a Complex protocol buffer message with multiple Dummy
     messages.
    :return: A Complex message.
    :rtype: Message
    """
    message = complex_pb2.Complex()
    message.one_dummy.id = 42
    message.one_dummy.name = "My name"
    message.multiple_dummies.add(id=43, name="My name 2")
    message.multiple_dummies.add(id=44, name="My name 3")
    message.multiple_dummies.add(id=45, name="My name 4")
    return message


def enum() -> Message:
    """
    Creates and returns an Enumeration protocol buffer message with an eye
     color set to green.
    :return: An Enumeration message.
    :rtype: Message
    """
    return enum_pb2.Enumeration(
        eye_color=enum_pb2.EYE_COLOR_GREEN,
    )


def oneof() -> None:
    """
    Demonstrates setting and printing a oneof field in a Result protocol buffer
     message.

    :return: None
    :rtype: NoneType
    """
    message = oneofs_pb2.Result()
    message.message = "message"
    print(message)
    message.id = 42
    print(message)


def maps() -> None:
    """
    Demonstrates setting and printing a map field in a MapExample protocol
     buffer message.
    :return: None
    :rtype: NoneType
    """
    message = maps_pb2.MapExample()
    message.ids["myid"].id = 42
    message.ids["myid2"].id = 43
    message.ids["myid3"].id = 44
    print(message)


def file(message: Message) -> None:
    """
    Serializes a protocol buffer message to a file and then deserializes it
     back.
    :param message: The protocol buffer message to be serialized and
     deserialized.
    :type message: Message
    :return: None
    :rtype: NoneType
    """
    path: str = "simple.bin"
    print("Write to file")
    print(message)
    with open(path, "wb") as f:
        bytes_as_str: bytes = message.SerializeToString()
        f.write(bytes_as_str)
    print("Read from file")
    with open(path, "rb") as f:
        t = type(message)
        message = t().FromString(f.read())
    print(message)


def to_json(message: Message) -> str:
    """
    Converts a protocol buffer message to a JSON string.
    :param message: The protocol buffer message to be converted.
    :type message: Message
    :return: The JSON string representation of the message.
    :rtype: str
    """
    return json_format.MessageToJson(
        message,
        indent=None,
    )


def from_json(json_str: str, message: Any) -> Message:
    """
    Parses a JSON string into a protocol buffer message.
    :param json_str: The JSON string to be parsed.
    :type json_str: str
    :param message: The protocol buffer message class.
    :type message: Any
    :return: The parsed protocol buffer message.
    :rtype: Message
    """
    return json_format.Parse(json_str, message(), ignore_unknown_fields=True)


if __name__ == "__main__":
    # print(simple())
    # print(complex())
    # print(enum())
    # oneof()
    # maps()
    # file(simple())
    json_str: str = to_json(complex())
    print(json_str)
    print(from_json(json_str, complex_pb2.Complex))
    print(from_json('{"id": 42, "unknown": "test"}', simple_pb2.Simple))

# Practice
"""
Create the following messages in 5 different files:

Date (example: 2018/03/15). With fields:
- Year (number)
- Month (number)
- Day (number)

Latitude Longitude (example: -33.865382, 151.192861). With fields:
- Latitude (number)
- Longitude (number)

Money (example: USD 35.42  (35 = integral, 42 = decimal)):
- Currency Code (string)
- Integral amount (number)
- Decimal amount (number)
- DayOfWeek (example Monday) using Enum, and keeping the 0 as “undefined” day

Person (example: Michael Jordan):
- First Name
- List of middle names
- Last Name
"""

# Exercise
"""
Create the following messages and enums:

City with the following fields:
- Name
- Zip Code
- Country Name

Street with the following fields:
- Street Name
- City

Building with the following fields:
- Building name
- Building number
- Street

Organise these messages/enums in 4 ways:
- All in one .proto file, as same level messages
- All in one .proto file, as nested messages
- Separate files with imports
- Separate files with imports and packages
"""

# protoc --cpp_out=. *.proto
