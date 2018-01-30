/*
 * Berry.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include "Berry.h"

Berry::Berry(Berry::BerryType t) :
		Loot(CONSUMABLE, 1), IConsumable() {
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

Berry::BerryType Berry::getType() const {
	return type;
}
std::string Berry::getDesc() const {
	return std::to_string(type);
}

/*
std::ostream& operator<<(std::ostream& out, Berry::BerryType e) {
	switch (e) {
	case Berry::NIGHTSHADE:
		out << "nightshade";
		break;
	case Berry::BLUEBERRY:
		out << "blueberry";
		break;
	case Berry::RASBERRY:
		out << "rasberry";
		break;
	case Berry::JUNIPER:
		out << "juniper";
		break;
	case Berry::YEW:
		out << "yew";
		break;
	case Berry::CRABAPPLE:
		out << "crabapple";
		break;
	}
	return out;
 }*/
