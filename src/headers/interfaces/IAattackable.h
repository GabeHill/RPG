/*
 * IAattackable.h
 *
 *  Created on: Jan 24, 2018
 *      Author: owner
 */

#ifndef HEADERS_INTERFACES_IAATTACKABLE_H_
#define HEADERS_INTERFACES_IAATTACKABLE_H_

#include <array>

#include "Weapon.h"
#include "Armor.h"

/**
 * class not to be instantiated. used for interface purposes.
 */
class IAttackable {
public:
	virtual int attack()=0;
	virtual int defend()=0;

	void setEquipWeapon(Weapon w);
	void setEquipArmor(Armor w);
	void storeWeapon(Weapon w, int index);
	void storeArmor(Armor w, int index);

	Weapon getEquipWeapon() const;
	Armor getEquipArmor() const;
	std::array<Weapon, 3> getStoredWeapons() const;
	std::array<Armor, 3> getStoredArmor() const;

	virtual ~IAttackable();

protected:
	Weapon equipedWeapon;
	Armor equippedArmor;
	std::array<Weapon, 3> storedWeapons;
	std::array<Armor, 3> storedArmor;
private:
};

#endif /* HEADERS_INTERFACES_IAATTACKABLE_H_ */
