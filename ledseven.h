/**
 * @file ledseven.h
 * @brief The header file for the library.
 *
 * @details
 * The <code>ledseven.h</code> file is the primary header file for this library.
 * It contains all necessary declarations, preprocessor statements, and related
 * code.
 *
 * @author Ethan Ruffing <ruffinge@gmail.com>
 * @since 2014-12-25
 * @version 0.2.0
 *
 * @license
 * This file is part of ledseven.
 * @par
 * Ledseven is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * @par
 * Ledseven is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * @par
 * You should have received a copy of the GNU Lesser General Public License
 * along with ledseven.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @todo Convert to C++ and make the library object-oriented
 */

#ifndef LEDseven_h
#define LEDseven_h

#include <stdlib.h>
#include <Arduino.h>

/**
 * @typedef struct pinOut PinOut
 *
 * @brief A typedef for the mapping of pins between the Arduino and seven-
 * segment LED display.
 *
 * @details
 * This type is to be used when creating the mapping between the pins of the
 * Arduino and those of the seven-segment LED display. For details on creating
 * the mapping, see the documentation for pinOut.
 *
 * @since 2014-12-26
 * @version 0.2.0
 */
/**
 * @struct pinOut
 *
 * @brief A mapping of Arduino pins to seven-segment LED display pins
 *
 * @details
 * The `pinOut` struct is designed to provide a system for mapping the Arduino
 * UNO's digital pins to the seven-segment LED display's pins. Each member
 * within the `pinOut` struct should be assigned an integer corresponding to the
 * Arduino digital pin to which that member has been linked.
 *
 * For example, if the LED display's pin A has been connected to the Arduino's
 * digital pin 2, then `pinOut.ledPinA` should be assigned a value of `2`.
 *
 * @since 2014-12-26
 * @version 0.2.0
 *
 * @copyright Copyright 2014 by Ethan Ruffing <ruffinge@gmail.com>
 */
typedef struct pinOut
{
	/** The Arduino digital pin corresponding to the LED display's pin A */
	int ledPinA;

	/** The Arduino digital pin corresponding to the LED display's pin B */
	int ledPinB;

	/** The Arduino digital pin corresponding to the LED display's pin C */
	int ledPinC;

	/** The Arduino digital pin corresponding to the LED display's pin D */
	int ledPinD;

	/** The Arduino digital pin corresponding to the LED display's pin E */
	int ledPinE;

	/** The Arduino digital pin corresponding to the LED display's pin F */
	int ledPinF;

	/** The Arduino digital pin corresponding to the LED display's pin G */
	int ledPinG;

	/** The Arduino digital pin corresponding to the LED display's pin DP */
	int ledPinDP;
} PinOut;

/**
 * @brief Prints a hexadecimal digit to the display.
 *
 * @details
 * The <code>printHex</code> function is designed to print a hexadecimal digit
 * to a seven-segment LED display.
 *
 * Note that, if the value passed as the digit to display does not match an
 * accepted value, a dash (`-`) will be displayed instead.
 *
 * @since 2014-12-25
 * @version 0.2.0
 *
 * @param[in] i
 *     The digit to display (Must be between 0x0 and 0xF, inclusive)
 * @param[in] pinMap
 *     A pointer to the PinOut that maps the relationship between the pins of
 *     the Arduino and those of the seven-segment LED display being used
 */
void printHex(unsigned int i, const PinOut *pinMap);

/**
 * @brief Prints a decimal digit to the display.
 *
 * @details
 * The <code>printDec</code> function is designed to print a decimal digit to a
 * seven-segment LED display.
 *
 * Note that, if the value passed as the digit to display does not match an
 * accepted value, a dash (`-`) will be displayed instead.
 *
 * @since 2014-12-25
 * @version 0.2.0
 *
 * @param[in] i
 *     The digit to display (must be between 0 and 9, inclusive)
 * @param[in] pinMap
 *     A pointer to the PinOut that maps the relationship between the pins of
 *     the Arduino and those of the seven-segment LED display being used
 */
void printDec(unsigned int i, const PinOut *pinMap);

/**
 * The <code> printPeriod</code> function will display a period on the seven-
 * segment LED display.
 *
 * @since 2014-12-25
 * @version 0.2.0
 *
 * @param[in] pinMap
 *     A pointer to the PinOut that maps the relationship between the pins of
 *     the Arduino and those of the seven-segment LED display being used
 */
void printPeriod(const PinOut *pinMap);

/**
 * The <code>clearScreen</code> function is designed to clear a seven-segment
 * LED display so that it can be written to again.
 *
 * @since 2014-12-25
 * @version 0.2.0
 *
 * @param[in] pinMap
 *     A pointer to the PinOut that maps the relationship between the pins of
 *     the Arduino and those of the seven-segment LED display being used
 */
void clearScreen(const PinOut *pinMap);

#endif // LEDseven_h
