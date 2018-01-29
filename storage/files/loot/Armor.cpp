/*
 * Armor.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include <string>

#include "../loot/Loot.h"
#include "../loot/Armor.h"

Armor::Armor(std::string t) :
		Loot() {
	title = t;
}

int Armor::getAgilityMod() const {
	return 0;
}
int Armor::getDefense() const {
	return 0;
}
int Armor::getRating() const {
	return 0;
}
std::string Armor::toString() const {
	return "";
}
