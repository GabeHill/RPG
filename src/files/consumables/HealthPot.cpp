/*
 * HealthPot.cpp
 *
 *  Created on: Jan 26, 2018
 *      Author: owner
 */
#include "HealthPot.h"

HealthPot::HealthPot() {
	healAmt = 35;
}

void HealthPot::use(Being b) {
	b.changeHealth(healAmt);
	healAmt = 0;
}
std::string HealthPot::getDesc() const {
	return "Heals " + healAmt + " points.";
}

