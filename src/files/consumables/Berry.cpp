/*
 * Berry.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include "Berry.h"

Berry::Berry(BerryType t) {
	type = t;
}

void Berry::use(Being b) {
//TODO how to implement this
	switch (type) {
	case NIGHTSHADE:
		b.changeHealth(-1000);
		break;
	case BLUEBERRY:
		b.changeHealth(2);
		break;
	case RASBERRY:
		b.changeHealth(2);
		break;
	case JUNIPER:
		b.changeHealth(-2);
		break;
	case YEW:
		b.changeHealth(-2);
		break;
	case CRABAPPLE:
		b.changeHealth(-2);
		break;
	default:
		break;
	}
}
std::string Berry::getDesc() const {
	return type;
}

