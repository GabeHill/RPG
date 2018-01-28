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
	const WeaponType type;
	const int damageMin;
	const int damageMax;

	Weapon(WeaponType t, int min, int max);

	int getDamage() const;
	std::string toString() const;
protected:
private:

};

#endif

