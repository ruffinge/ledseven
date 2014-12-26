/**
 * @file ledseven.c
 * @brief The main sources for the library.
 *
 * @details
 * This file contains the source for the functions to write to the seven-segment
 * LED.
 *
 * @author Ethan Ruffing <ruffinge@gmail.com>
 * @since 2014-12-25
 * @version 0.1.0
 */

#include "ledseven.h"

void printHex(uint i)
{
	if (0 <= i && i <= 9) {
		printDec(i);
	} else {
		switch (i) {
		case 0xA:
			digitalWrite(LED_PIN_A, HIGH);
			digitalWrite(LED_PIN_B, HIGH);
			digitalWrite(LED_PIN_C, HIGH);
			digitalWrite(LED_PIN_G, HIGH);
			digitalWrite(LED_PIN_E, HIGH);
			digitalWrite(LED_PIN_F, HIGH);
			break;
		case 0xB:
			digitalWrite(LED_PIN_C, HIGH);
			digitalWrite(LED_PIN_D, HIGH);
			digitalWrite(LED_PIN_E, HIGH);
			digitalWrite(LED_PIN_F, HIGH);
			digitalWrite(LED_PIN_G, HIGH);
			break;
		case 0xC:
			digitalWrite(LED_PIN_A, HIGH);
			digitalWrite(LED_PIN_F, HIGH);
			digitalWrite(LED_PIN_E, HIGH);
			digitalWrite(LED_PIN_E, HIGH);
			break;
		case 0xD:
			digitalWrite(LED_PIN_B, HIGH);
			digitalWrite(LED_PIN_C, HIGH);
			digitalWrite(LED_PIN_D, HIGH);
			digitalWrite(LED_PIN_E, HIGH);
			digitalWrite(LED_PIN_G, HIGH);
			break;
		case 0xE:
			digitalWrite(LED_PIN_A, HIGH);
			digitalWrite(LED_PIN_B, HIGH);
			digitalWrite(LED_PIN_D, HIGH);
			digitalWrite(LED_PIN_E, HIGH);
			digitalWrite(LED_PIN_F, HIGH);
			digitalWrite(LED_PIN_G, HIGH);
			break;
		case 0xF:
			digitalWrite(LED_PIN_A, HIGH);
			digitalWrite(LED_PIN_D, HIGH);
			digitalWrite(LED_PIN_E, HIGH);
			digitalWrite(LED_PIN_F, HIGH);
			digitalWrite(LED_PIN_G, HIGH);
			break;
		default:
			digitalWrite(LED_PIN_G, HIGH);
			break;
		}
	}
}

void printDec(uint i)
{
	switch (i) {
	case 0:
		digitalWrite(LED_PIN_A, HIGH);
		digitalWrite(LED_PIN_B, HIGH);
		digitalWrite(LED_PIN_C, HIGH);
		digitalWrite(LED_PIN_D, HIGH);
		digitalWrite(LED_PIN_E, HIGH);
		digitalWrite(LED_PIN_F, HIGH);
		break;
	case 1:
		digitalWrite(LED_PIN_B, HIGH);
		digitalWrite(LED_PIN_C, HIGH);
		break;
	case 2:
		digitalWrite(LED_PIN_A, HIGH);
		digitalWrite(LED_PIN_B, HIGH);
		digitalWrite(LED_PIN_G, HIGH);
		digitalWrite(LED_PIN_E, HIGH);
		digitalWrite(LED_PIN_D, HIGH);
		break;
	case 3:
		digitalWrite(LED_PIN_A, HIGH);
		digitalWrite(LED_PIN_F, HIGH);
		digitalWrite(LED_PIN_G, HIGH);
		digitalWrite(LED_PIN_E, HIGH);
		digitalWrite(LED_PIN_D, HIGH);
		break;
	case 4:
		digitalWrite(LED_PIN_F, HIGH);
		digitalWrite(LED_PIN_G, HIGH);
		digitalWrite(LED_PIN_B, HIGH);
		digitalWrite(LED_PIN_C, HIGH);
		break;
	case 5:
		digitalWrite(LED_PIN_A, HIGH);
		digitalWrite(LED_PIN_F, HIGH);
		digitalWrite(LED_PIN_G, HIGH);
		digitalWrite(LED_PIN_C, HIGH);
		digitalWrite(LED_PIN_D, HIGH);
		break;
	case 6:
		digitalWrite(LED_PIN_A, HIGH);
		digitalWrite(LED_PIN_F, HIGH);
		digitalWrite(LED_PIN_G, HIGH);
		digitalWrite(LED_PIN_C, HIGH);
		digitalWrite(LED_PIN_D, HIGH);
		digitalWrite(LED_PIN_E, HIGH);
		break;
	case 7:
		digitalWrite(LED_PIN_A, HIGH);
		digitalWrite(LED_PIN_B, HIGH);
		digitalWrite(LED_PIN_C, HGIH);
		break;
	case 8:
		digitalWrite(LED_PIN_A, HIGH);
		digitalWrite(LED_PIN_B, HIGH);
		digitalWrite(LED_PIN_C, HIGH);
		digitalWrite(LED_PIN_D, HIGH);
		digitalWrite(LED_PIN_E, HIGH);
		digitalWrite(LED_PIN_F, HIGH);
		digitalWrite(LED_PIN_G, HIGH);
		break;
	case 9:
		digitalWrite(LED_PIN_A, HIGH);
		digitalWrite(LED_PIN_B, HIGH);
		digitalWrite(LED_PIN_C, HIGH);
		digitalWrite(LED_PIN_F, HIGH);
		break;
	default:
		digitalWrite(LED_PIN_G, HIGH);
		break;
	}
}

void printPeriod()
{
	digitalWrite(LED_PIN_DP, HIGH);
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
