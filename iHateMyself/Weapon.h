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

	const std::vector<std::string> weaponNames = { "mace", "sword", "bow",
			"dagger", "axe" };

	Weapon();
	Weapon(WeaponType t, int min, int max);

	int GetDamage() const;
	std::string GetWeaponType() const;
	int GetDamageMin() const;
	int GetDamageMax() const;
	std::string GetDesc() const;
protected:
private:
	WeaponType typ;
	int damageMax;
	int damageMin;
};

#endif /* WEAPON_H_ */
