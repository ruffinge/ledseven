Arduino Library for 7-Segment LED Display
=========================================

Copyright
---------
Copyright 2014 by Ethan Ruffing

License
-------
This file is part of ledseven.

Ledseven is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Ledseven is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with ledseven.  If not, see <http://www.gnu.org/licenses/>.

Overview
--------
This is a library designed for using a seven-segment LED with an Arduino
UNO.

This library is designed for use with a seven-segment LED display, set
up according to a "common ground" scheme which follows the following pin
diagram (note that pin `dp` represents pin for the dot/period):

     - a -
    |     |
    f     g
    |     |
     - g -
    |     |
    e     f    __
    |     |   |dp|
     - d -     --

These LED display pins are then mapped to the Arduino's digital pins
using the `pinOut` struct.

To get started using the library, create a `PinOut` variable and define
each of its members according to the documentation for the `pinOut`
struct. Then, simply call the function for the type of output you wish
to display, and pass the value to be displayed along with a pointer to
your pin mapping variable.

Note that, on each call to print a new value to the display, the old
value will not be automatically cleared. Instead, to clear it, you must
call `clearScreen(const PinOut *pinMap)`.
