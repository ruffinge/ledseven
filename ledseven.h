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
 * @version 0.1.0
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
 * @version 0.1.0
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
 * @version 0.1.0
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
 * The <code>printHex</code> function is designed to print a hexadecimal digit
 * to a seven-segment LED.
 *
 * @since 2014-12-25
 * @version 0.1.0
 *
 * @param[in] i
 *     The digit to display (Must be between 0x0 and 0xF, inclusive)
 * @param[in] pinMap
 *     A pointer to the PinOut that maps the relationship between the pins of
 *     the Arduino and those of the seven-segment LED display being used
 */
void printHex(unsigned int i, const PinOut *pinMap);

/**
 * The <code>printDec</code> function is designed to print a decimal digit to a
 * seven-segment LED.
 *
 * @since 2014-12-25
 * @version 0.1.0
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
 * segment LED.
 *
 * @since 2014-12-25
 * @version 0.1.0
 *
 * @param[in] pinMap
 *     A pointer to the PinOut that maps the relationship between the pins of
 *     the Arduino and those of the seven-segment LED display being used
 */
void printPeriod(const PinOut *pinMap);

/**
 * The <code>clearScreen</code> function is designed to clear a seven-segment
 * LED so that it can be written to again.
 *
 * @since 2014-12-25
 * @version 0.1.0
 *
 * @param[in] pinMap
 *     A pointer to the PinOut that maps the relationship between the pins of
 *     the Arduino and those of the seven-segment LED display being used
 */
void clearScreen(const PinOut *pinMap);

#endif // LEDseven_h
