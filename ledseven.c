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
 * @version 0.2.0
 *
 * @copyright Copyright 2014 by Ethan Ruffing <ruffinge@gmail.com>
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
 */

#include "ledseven.h"

void printHex(unsigned int i, const PinOut *pinMap)
{
	if (0 <= i && i <= 9)
	{
		printDec(i, pinMap);
	}
	else
	{
		switch (i)
		{
		case 0xA:
			digitalWrite((*pinMap).ledPinA, HIGH);
			digitalWrite((*pinMap).ledPinB, HIGH);
			digitalWrite((*pinMap).ledPinC, HIGH);
			digitalWrite((*pinMap).ledPinG, HIGH);
			digitalWrite((*pinMap).ledPinE, HIGH);
			digitalWrite((*pinMap).ledPinF, HIGH);
			break;
		case 0xB:
			digitalWrite((*pinMap).ledPinC, HIGH);
			digitalWrite((*pinMap).ledPinD, HIGH);
			digitalWrite((*pinMap).ledPinE, HIGH);
			digitalWrite((*pinMap).ledPinF, HIGH);
			digitalWrite((*pinMap).ledPinG, HIGH);
			break;
		case 0xC:
			digitalWrite((*pinMap).ledPinA, HIGH);
			digitalWrite((*pinMap).ledPinF, HIGH);
			digitalWrite((*pinMap).ledPinE, HIGH);
			digitalWrite((*pinMap).ledPinE, HIGH);
			break;
		case 0xD:
			digitalWrite((*pinMap).ledPinB, HIGH);
			digitalWrite((*pinMap).ledPinC, HIGH);
			digitalWrite((*pinMap).ledPinD, HIGH);
			digitalWrite((*pinMap).ledPinE, HIGH);
			digitalWrite((*pinMap).ledPinG, HIGH);
			break;
		case 0xE:
			digitalWrite((*pinMap).ledPinA, HIGH);
			digitalWrite((*pinMap).ledPinB, HIGH);
			digitalWrite((*pinMap).ledPinD, HIGH);
			digitalWrite((*pinMap).ledPinE, HIGH);
			digitalWrite((*pinMap).ledPinF, HIGH);
			digitalWrite((*pinMap).ledPinG, HIGH);
			break;
		case 0xF:
			digitalWrite((*pinMap).ledPinA, HIGH);
			digitalWrite((*pinMap).ledPinA, HIGH);
			digitalWrite((*pinMap).ledPinD, HIGH);
			digitalWrite((*pinMap).ledPinE, HIGH);
			digitalWrite((*pinMap).ledPinF, HIGH);
			digitalWrite((*pinMap).ledPinG, HIGH);
			break;
		default:
			digitalWrite((*pinMap).ledPinG, HIGH);
			break;
		}
	}

}

void printDec(unsigned int i, const pinOut *pinMap)
{
	switch (i)
	{
	case 0:
		digitalWrite((*pinMap).ledPinA, HIGH);
		digitalWrite((*pinMap).ledPinB, HIGH);
		digitalWrite((*pinMap).ledPinC, HIGH);
		digitalWrite((*pinMap).ledPinD, HIGH);
		digitalWrite((*pinMap).ledPinE, HIGH);
		digitalWrite((*pinMap).ledPinF, HIGH);
		break;
	case 1:
		digitalWrite((*pinMap).ledPinB, HIGH);
		digitalWrite((*pinMap).ledPinC, HIGH);
		break;
	case 2:
		digitalWrite((*pinMap).ledPinA, HIGH);
		digitalWrite((*pinMap).ledPinB, HIGH);
		digitalWrite((*pinMap).ledPinG, HIGH);
		digitalWrite((*pinMap).ledPinE, HIGH);
		digitalWrite((*pinMap).ledPinD, HIGH);
		break;
	case 3:
		digitalWrite((*pinMap).ledPinA, HIGH);
		digitalWrite((*pinMap).ledPinF, HIGH);
		digitalWrite((*pinMap).ledPinG, HIGH);
		digitalWrite((*pinMap).ledPinE, HIGH);
		digitalWrite((*pinMap).ledPinD, HIGH);
		break;
	case 4:
		digitalWrite((*pinMap).ledPinF, HIGH);
		digitalWrite((*pinMap).ledPinG, HIGH);
		digitalWrite((*pinMap).ledPinB, HIGH);
		digitalWrite((*pinMap).ledPinC, HIGH);
		break;
	case 5:
		digitalWrite((*pinMap).ledPinA, HIGH);
		digitalWrite((*pinMap).ledPinF, HIGH);
		digitalWrite((*pinMap).ledPinG, HIGH);
		digitalWrite((*pinMap).ledPinC, HIGH);
		digitalWrite((*pinMap).ledPinD, HIGH);
		break;
	case 6:
		digitalWrite((*pinMap).ledPinA, HIGH);
		digitalWrite((*pinMap).ledPinF, HIGH);
		digitalWrite((*pinMap).ledPinG, HIGH);
		digitalWrite((*pinMap).ledPinC, HIGH);
		digitalWrite((*pinMap).ledPinD, HIGH);
		digitalWrite((*pinMap).ledPinE, HIGH);
		break;
	case 7:
		digitalWrite((*pinMap).ledPinA, HIGH);
		digitalWrite((*pinMap).ledPinB, HIGH);
		digitalWrite((*pinMap).ledPinC, HIGH);
		break;
	case 8:
		digitalWrite((*pinMap).ledPinA, HIGH);
		digitalWrite((*pinMap).ledPinB, HIGH);
		digitalWrite((*pinMap).ledPinC, HIGH);
		digitalWrite((*pinMap).ledPinD, HIGH);
		digitalWrite((*pinMap).ledPinE, HIGH);
		digitalWrite((*pinMap).ledPinF, HIGH);
		digitalWrite((*pinMap).ledPinG, HIGH);
		break;
	case 9:
		digitalWrite((*pinMap).ledPinA, HIGH);
		digitalWrite((*pinMap).ledPinB, HIGH);
		digitalWrite((*pinMap).ledPinC, HIGH);
		digitalWrite((*pinMap).ledPinF, HIGH);
		break;
	default:
		digitalWrite((*pinMap).ledPinG, HIGH);
		break;
	}
}

void printPeriod(const PinOut *pinMap)
{
	digitalWrite((*pinMap).ledPinDP, HIGH);
}

void clearScreen(const PinOut *pinMap)
{
	digitalWrite((*pinMap).ledPinA, LOW);
	digitalWrite((*pinMap).ledPinB, LOW);
	digitalWrite((*pinMap).ledPinC, LOW);
	digitalWrite((*pinMap).ledPinD, LOW);
	digitalWrite((*pinMap).ledPinDP, LOW);
	digitalWrite((*pinMap).ledPinE, LOW);
	digitalWrite((*pinMap).ledPinF, LOW);
	digitalWrite((*pinMap).ledPinG, LOW);
}
