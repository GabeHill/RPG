/*
 * Berry.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include "Berry.h"

Berry::Berry(Berry::BerryType t) :
		Loot(CONSUMABLE, 1) {
	type = t;
}

void Berry::Use(Being* & b) {
	switch (type) {
	case NIGHTSHADE:
		b->ChangeHealth(-1000);
		break;
	case BLUEBERRY:
		b->ChangeHealth(2);
		break;
	case RASBERRY:
		b->ChangeHealth(2);
		break;
	case JUNIPER:
		b->ChangeHealth(-2);
		break;
	case YEW:
		b->ChangeHealth(-2);
		break;
	case CRABAPPLE:
		b->ChangeHealth(-2);
		break;
	default:
		break;
	}
}

std::string Berry::GetType() const {
	return berryNames[type];
}
std::string Berry::GetDesc() const {
	return GetType();
}

