/*
 * IAattackable.h
 *
 *  Created on: Jan 24, 2018
 *      Author: owner
 */

#ifndef HEADERS_INTERFACES_IAATTACKABLE_H_
#define HEADERS_INTERFACES_IAATTACKABLE_H_

#include <vector>

class IAttackable {
public:
	int attack();
	int defend();

	Weapon getEquipWeapon();
	Armor getEquipArmor();
	std::vector<Weapon> getStoredWeapons();
	std::vector<Armor> getStoredArmor();

protected:
	Weapon equipedWeapon;
	Armor equippedArmor;
	std::vector<Weapon> storedWeapons;
	std::vector<Armor> storedArmor;

};




#endif /* HEADERS_INTERFACES_IAATTACKABLE_H_ */
