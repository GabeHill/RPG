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

Loot::Loot(int n) {
	srand(time(NULL));

	std::string temp;
	switch (n) {
	case 0:
		temp = "pelt";
		break;
	case 1:
		temp = "chair";
		break;
	case 2:
		temp = "pot";
		break;
	case 3:
		temp = "rug";
		break;
	case 4:
		temp = "bucket";
		break;
	case 5:
		temp = "hat";
		break;
	case 6:
		temp = "cloth";
		break;
	default:
		break;
	}

	name = temp;
	type = GENERIC;
	value = (rand() % 25) + 1;
}

Loot::Loot(LootType t, int val) {
	name = t;
	value = val;
	type = t;
}

std::string Loot::getName() const {
	return name;
}
Loot::LootType Loot::getType() const {
	return type;
}
int Loot::getValue() const {
	return value;
}

std::string Loot::getDesc() const {
	return type + ", " + name + ", " + std::to_string(getValue()) + " gold.";
}
