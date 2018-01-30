/*
 * HealthPot.cpp
 *
 *  Created on: Jan 26, 2018
 *      Author: owner
 */
#include "HealthPot.h"

HealthPot::HealthPot() :
		Loot(CONSUMABLE, (rand() % 24) + 1) {
	healAmt = 35;
}

void HealthPot::use(Being* & b) {
	b->changeHealth(healAmt);
	healAmt = 0;
}
std::string HealthPot::getDesc() const {
	std::string f = "Health pot; heals " + std::to_string(healAmt) + " points.";
	return f;
}

