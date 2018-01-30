/*
 * Weapon.h
 *
 *  Created on: Jan 29, 2018
 *      Author: owner
 */

#ifndef WEAPON_H_
#define WEAPON_H_

#include "Loot.h"

class Weapon: public Loot {
public:
	enum WeaponType {
		MACE, SWORD, BOW, DAGGER, AXE
	};
	Weapon();
	Weapon(WeaponType t, int min, int max);

	int getDamage() const;
	WeaponType weaponType() const;
	int getDamageMin() const;
	int getDamageMax() const;
	std::string getDesc() const;
protected:
private:
	WeaponType typ;
	int damageMax;
	int damageMin;
};

#endif /* WEAPON_H_ */
