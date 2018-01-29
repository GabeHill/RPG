/*
 * Weapon.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_LOOT_WEAPON_H_
#define HEADERS_LOOT_WEAPON_H_

#include "Loot.h"

class Weapon: public Loot {

	enum WeaponType {

	};

public:

	Weapon(WeaponType t, int min, int max);

	WeaponType weaponType() const;
	int getDamage() const;
	int getDamageMin() const;
	int getDamageMax() const;
	std::string toString() const;
protected:
private:
	WeaponType type;
	int damageMin;
	int damageMax;
};

#endif

