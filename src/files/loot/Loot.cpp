/*
 * Loot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include <string>
#include <cstdlib>
#include <ctime>

#include "../loot/Loot.h"

int r = rand();

Loot::Loot(GenericLoot g) {
	srand(time(NULL));

	name = g;
	type = GENERIC;
	value = (rand() % 25) + 1;
}
Loot::Loot(LootType t, int val) {
	name = t;
	value = val;
	type = t;
}

int Loot::getValue() const {
	return value;
}

std::string Loot::getDesc() const {
	return type + ", " + name + ", " + getValue() + " gold.";
}
