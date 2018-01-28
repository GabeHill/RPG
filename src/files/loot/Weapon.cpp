/*
 * Weapon.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include <string>

#include "../loot/Loot.h"
#include "../loot/Weapon.h"

Weapon::Weapon(WeaponType t, int min, int max) :
		Loot(WEAPON, (rand() % 100) + 1) {
	type = t;
	damageMin = min;
	damageMax = max;
}

int Weapon::getDamage() const {
	return (rand() % (damageMax = damageMin)) + damageMin;
}
std::string Weapon::toString() const {
	return type + ", Min. Damage: " + damageMin + ", Max. Damamge: " + damageMax
			+ ".";
}
