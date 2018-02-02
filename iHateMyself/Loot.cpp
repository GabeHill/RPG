/*
 * Loot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include <string>
#include <cstdlib>
#include <ctime>
#include <string>

#include "../iHateMyself/Loot.h"

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

std::string Loot::GetName() const {
	return name;
}
std::string Loot::GetType() const {
	return lootNames[type];
}
int Loot::GetValue() const {
	return value;
}

std::string Loot::GetDesc() const {
	return GetType() + ", " + std::to_string(GetValue()) + " gold.";
}

/*
std::ostream& operator<<(std::ostream& out, Loot::LootType e) {
	switch (e) {
	case Loot::ARMOR:
		out << "armor";
		break;
	case Loot::CONSUMABLE:
		out << "consumable";
		break;
	case Loot::WEAPON:
		out << "weapon";
		break;
	case Loot::GENERIC:
		out << "generic";
		break;
	}
	return out;
}
std::ostream& operator<<(std::ostream& out, Loot::GenericLoot e) {
	switch (e) {
	case Loot::PELT:
		out << "pelt";
		break;
	case Loot::CHAIR:
		out << "chair";
		break;
	case Loot::POT:
		out << "pot";
		break;
	case Loot::RUG:
		out << "rug";
		break;
	case Loot::BUCKET:
		out << "bucket";
		break;
	case Loot::HAT:
		out << "hat";
		break;
	case Loot::CLOTH:
		out << "cloth";
		break;
	}
	return out;
 }*/
