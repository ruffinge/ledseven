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

void printHex(unsigned int i, const PinOut *pinMap)
{
	if (0 <= i && i <= 9) {
		printDec(i, pinMap);
	} else {
		switch (i) {
		case 0xA:
			digitalWrite(&pinMap.ledPinA, HIGH);
			digitalWrite(&pinMap.ledPinB, HIGH);
			digitalWrite(&pinMap.ledPinC, HIGH);
			digitalWrite(&pinMap.ledPinG, HIGH);
			digitalWrite(&pinMap.ledPinE, HIGH);
			digitalWrite(&pinMap.ledPinF, HIGH);
			break;
		case 0xB:
			digitalWrite(&pinMap.ledPinC, HIGH);
			digitalWrite(&pinMap.ledPinD, HIGH);
			digitalWrite(&pinMap.ledPinE, HIGH);
			digitalWrite(&pinMap.ledPinF, HIGH);
			digitalWrite(&pinMap.ledPinG, HIGH);
			break;
		case 0xC:
			digitalWrite(&pinMap.ledPinA, HIGH);
			digitalWrite(&pinMap.ledPinF, HIGH);
			digitalWrite(&pinMap.ledPinE, HIGH);
			digitalWrite(&pinMap.ledPinE, HIGH);
			break;
		case 0xD:
			digitalWrite(&pinMap.ledPinB, HIGH);
			digitalWrite(&pinMap.ledPinC, HIGH);
			digitalWrite(&pinMap.ledPinD, HIGH);
			digitalWrite(&pinMap.ledPinE, HIGH);
			digitalWrite(&pinMap.ledPinG, HIGH);
			break;
		case 0xE:
			digitalWrite(&pinMap.ledPinA, HIGH);
			digitalWrite(&pinMap.ledPinB, HIGH);
			digitalWrite(&pinMap.ledPinD, HIGH);
			digitalWrite(&pinMap.ledPinE, HIGH);
			digitalWrite(&pinMap.ledPinF, HIGH);
			digitalWrite(&pinMap.ledPinG, HIGH);
			break;
		case 0xF:
			digitalWrite(&pinMap.ledPinA, HIGH);
			digitalWrite(&pinMap.ledPinA, HIGH);
			digitalWrite(&pinMap.ledPinD, HIGH);
			digitalWrite(&pinMap.ledPinE, HIGH);
			digitalWrite(&pinMap.ledPinF, HIGH);
			digitalWrite(&pinMap.ledPinG, HIGH);
			break;
		default:
			digitalWrite(&pinMap.ledPinG, HIGH);
			break;
		}
	}

}

void printDec(unsigned int i, const pinOut *pinMap)
{
	switch (i) {
	case 0:
		digitalWrite(&pinMap.ledPinA, HIGH);
		digitalWrite(&pinMap.ledPinB, HIGH);
		digitalWrite(&pinMap.ledPinC, HIGH);
		digitalWrite(&pinMap.ledPinD, HIGH);
		digitalWrite(&pinMap.ledPinE, HIGH);
		digitalWrite(&pinMap.ledPinF, HIGH);
		break;
	case 1:
		digitalWrite(&pinMap.ledPinB, HIGH);
		digitalWrite(&pinMap.ledPinC, HIGH);
		break;
	case 2:
		digitalWrite(&pinMap.ledPinA, HIGH);
		digitalWrite(&pinMap.ledPinB, HIGH);
		digitalWrite(&pinMap.ledPinG, HIGH);
		digitalWrite(&pinMap.ledPinE, HIGH);
		digitalWrite(&pinMap.ledPinD, HIGH);
		break;
	case 3:
		digitalWrite(&pinMap.ledPinA, HIGH);
		digitalWrite(&pinMap.ledPinF, HIGH);
		digitalWrite(&pinMap.ledPinG, HIGH);
		digitalWrite(&pinMap.ledPinE, HIGH);
		digitalWrite(&pinMap.ledPinD, HIGH);
		break;
	case 4:
		digitalWrite(&pinMap.ledPinF, HIGH);
		digitalWrite(&pinMap.ledPinG, HIGH);
		digitalWrite(&pinMap.ledPinB, HIGH);
		digitalWrite(&pinMap.ledPinC, HIGH);
		break;
	case 5:
		digitalWrite(&pinMap.ledPinA, HIGH);
		digitalWrite(&pinMap.ledPinF, HIGH);
		digitalWrite(&pinMap.ledPinG, HIGH);
		digitalWrite(&pinMap.ledPinC, HIGH);
		digitalWrite(&pinMap.ledPinD, HIGH);
		break;
	case 6:
		digitalWrite(&pinMap.ledPinA, HIGH);
		digitalWrite(&pinMap.ledPinF, HIGH);
		digitalWrite(&pinMap.ledPinG, HIGH);
		digitalWrite(&pinMap.ledPinC, HIGH);
		digitalWrite(&pinMap.ledPinD, HIGH);
		digitalWrite(&pinMap.ledPinE, HIGH);
		break;
	case 7:
		digitalWrite(&pinMap.ledPinA, HIGH);
		digitalWrite(&pinMap.ledPinB, HIGH);
		digitalWrite(&pinMap.ledPinC, HGIH);
		break;
	case 8:
		digitalWrite(&pinMap.ledPinA, HIGH);
		digitalWrite(&pinMap.ledPinB, HIGH);
		digitalWrite(&pinMap.ledPinC, HIGH);
		digitalWrite(&pinMap.ledPinD, HIGH);
		digitalWrite(&pinMap.ledPinE, HIGH);
		digitalWrite(&pinMap.ledPinF, HIGH);
		digitalWrite(&pinMap.ledPinG, HIGH);
		break;
	case 9:
		digitalWrite(&pinMap.ledPinA, HIGH);
		digitalWrite(&pinMap.ledPinB, HIGH);
		digitalWrite(&pinMap.ledPinC, HIGH);
		digitalWrite(&pinMap.ledPinF, HIGH);
		break;
	default:
		digitalWrite(&pinMap.ledPinG, HIGH);
		break;
	}
}

void printPeriod()
{
	digitalWrite(&pinMap.ledPinDP, HIGH);
}

void clearScreen()
{
	digitalWrite(&pinMap.ledPinA, LOW);
	digitalWrite(&pinMap.ledPinB, LOW);
	digitalWrite(&pinMap.ledPinC, LOW);
	digitalWrite(&pinMap.ledPinD, LOW);
	digitalWrite(&pinMap.ledPinDP, LOW);
	digitalWrite(&pinMap.ledPinE, LOW);
	digitalWrite(&pinMap.ledPinF, LOW);
	digitalWrite(&pinMap.ledPinG, LOW);
}
