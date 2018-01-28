/*
 * HealthPot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include "ManaPot.h"

ManaPot::ManaPot() {
	manaRestore = 0;
}

void ManaPot::use(Being b) {
	b.changeMana(manaRestore);
	manaRestore = 0;
}
std::string ManaPot::getDesc() const {
	return "Restores " + manaRestore + " mana.";
}
