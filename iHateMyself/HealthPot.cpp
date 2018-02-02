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

void HealthPot::Use(Being* & b) {
	b->ChangeHealth(healAmt);
	healAmt = 0;
}
std::string HealthPot::GetDesc() const {
	std::string f = "Health pot; heals " + std::to_string(healAmt) + " points.";
	return f;
}

