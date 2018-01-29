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
	int max=getDamageMax();
	int min=getDamageMin();
	return (rand() % ( max=min )) +min;
}
Weapon::WeaponType Weapon::weaponType()const{
	return type;
}
int Weapon::getDamageMin()const{
	return damageMin;
}
int Weapon::getDamageMax()const{
	return damageMax;
}
std::string Weapon::toString() const {
	return type + ", Min. Damage: " + std::to_string(damageMin) + ", Max. Damamge: " + std::to_string(damageMax)
			+ ".";
}
