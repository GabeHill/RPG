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

int Weapon::GetDamage() const {
	int max = GetDamageMax();
	int min = GetDamageMin();
	return (rand() % (max = min)) + min;
}
std::string Weapon::GetWeaponType() const {
	return weaponNames[typ];
}
int Weapon::GetDamageMin() const {
	return damageMin;
}
int Weapon::GetDamageMax() const {
	return damageMax;
}
std::string Weapon::GetDesc() const {
	return GetWeaponType() + ", Min. Damage: " + std::to_string(damageMin)
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
