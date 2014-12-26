/**
 * @file
 * This file contains the source for the functions to write to the seven-segment
 * LED.
 *
 * @author Ethan Ruffing <ruffinge@gmail.com>
 * @since 2014-12-25
 * @version 0.0.0
 */

#include "ledseven.h"

void printHex(int i)
{
	switch (i)
	{
	case 0:
	default:
	}
}

void printDec(int i)
{
	switch (i)
	{
	case 0:

	default:
	}
}

void clearScreen()
{
	digitalWrite(LED_PIN_A, LOW);
	digitalWrite(LED_PIN_B, LOW);
	digitalWrite(LED_PIN_C, LOW);
	digitalWrite(LED_PIN_D, LOW);
	digitalWrite(LED_PIN_DP, LOW);
	digitalWrite(LED_PIN_E, LOW);
	digitalWrite(LED_PIN_F, LOW);
	digitalWrite(LED_PIN_G, LOW);
}
