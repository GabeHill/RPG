/*
 * HealthPot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include "../iHateMyself/ManaPot.h"
#include "Being.h"

ManaPot::ManaPot() :
		Loot(CONSUMABLE, (rand() % 24) + 1) {
	manaRestore = rand() % 20;
}

void ManaPot::use(Being* & b) {
	b->changeMana(manaRestore);
	manaRestore = 0;
}

std::string ManaPot::getDesc() const {
	std::string f = "Mana pot; restores " + std::to_string(manaRestore)
			+ " mana.";
	return f;
}
