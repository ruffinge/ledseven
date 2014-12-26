7-Segment LCD Library for Arduino UNO
=====================================

Copyright 2014 by Ethan Ruffing

This is a library designed for using a seven-segment LED with an Arduino UNO.

This library is designed for use with a seven-segment LED display, set up
according to a "common ground" scheme which follows the following pin diagram
(note that pin `dp` represents pin for the dot/period):

	 - a -
	|     |
	f     g
	|     |
	 - g -
	|     |
	e     f    __
	|     |   |dp|
	 - d -     --

These LED display pins are then expected to be connected to an Arduino UNO's
digital pins according to the following table:

| LED Pin | Arduino Pin |
|:-------:|:-----------:|
|    A    |      2      |
|    B    |      3      |
|    C    |      4      |
|    D    |      6      |
|    E    |      7      |
|    F    |      8      |
|    G    |      9      |
|    DP   |      5      |
