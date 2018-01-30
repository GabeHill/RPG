/*
 * Weapon.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include <string>

#include "Loot.h"
#include "Weapon.h"

Weapon::Weapon() :
		Loot(WEAPON, (rand() % 99) + 1) {
	typ = DAGGER;
	damageMin = 0;
	damageMax = 1;
}
Weapon::Weapon(WeaponType t, int min, int max) :
		Loot(WEAPON, (rand() % 100) + 1) {
	typ = t;
	damageMin = min;
	damageMax = max;
}

int Weapon::getDamage() const {
	int max = getDamageMax();
	int min = getDamageMin();
	return (rand() % (max = min)) + min;
}
Weapon::WeaponType Weapon::weaponType() const {
	return typ;
}
int Weapon::getDamageMin() const {
	return damageMin;
}
int Weapon::getDamageMax() const {
	return damageMax;
}
std::string Weapon::getDesc() const {
	return typ + ", Min. Damage: " + std::to_string(damageMin)
			+ ", Max. Damamge: " + std::to_string(damageMax) + ".";
}

/*
std::ostream& operator<<(std::ostream& out, Weapon::WeaponType e) {
	switch (e) {
	case Weapon::MACE:
		out << "mace";
		break;
	case Weapon::SWORD:
		out << "sword";
		break;
	case Weapon::BOW:
		out << "bow";
		break;
	case Weapon::DAGGER:
		out << "dagger";
		break;
	case Weapon::AXE:
		out << "AXE";
		break;
	}
	return out;
 }*/
