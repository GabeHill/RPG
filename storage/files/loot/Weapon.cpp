/*
 * Weapon.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include <string>

#include "../loot/Loot.h"
#include "../loot/Weapon.h"

Weapon::Weapon(std::string t) :
		Loot() {
	title = t;
}

int Weapon::getDamage() const {
	return 0;
}
std::string Weapon::toString() const {
	return "";
}
