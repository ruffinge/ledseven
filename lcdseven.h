#ifndef LEDseven_h
#define LEDseven_h

#include <Arduino.h>

#define LED_PIN_A 2
#define LED_PIN_B 3
#define LED_PIN_C 4
#define LED_PIN_DP 5
#define LED_PIN_D 6
#define LED_PIN_E 7
#define LED_PIN_F 8
#define LED_PIN_G 9

/**
 * The <code>printHex</code> function is designed to print a hexadecimal digit
 * to a seven-segment LED.
 *
 * @since 2014-12-25
 *
 * @param[in] i
 *     The digit to display (Must be between 0x0 and 0xF, inclusive)
 */
void printHex(int i);

/**
 * The <code>printDec</code> function is designed to print a decimal digit to a
 * seven-segment LED.
 *
 * @since 2014-12-25
 *
 * @param[in] i
 *     The digit to display (must be between 0 and 9, inclusive)
 */
void printDec(int i);

/**
 * The <code>clearScreen</code> function is designed to clear a seven-segment
 * LED so that it can be written to again.
 *
 * @since 2014-12-25
 */
void clearScreen();

#endif // LEDseven_h
