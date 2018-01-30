/*
 * IAattackable.h
 *
 *  Created on: Jan 24, 2018
 *      Author: owner
 */

#ifndef HEADERS_INTERFACES_IAATTACKABLE_H_
#define HEADERS_INTERFACES_IAATTACKABLE_H_

#include <vector>

#include "../iHateMyself/Armor.h"
#include "../iHateMyself/Weapon.h"

/**
 * class not to be instantiated. used for interface purposes.
 */
class IAttackable {
public:
	virtual int attack() const=0;
	virtual void takeDmg(int dmg)=0;

	void setEquipWeapon(Weapon w);
	void setEquipArmor(Armor w);
	void storeWeapon(Weapon w);
	void storeArmor(Armor w);

	Weapon getEquipWeapon() const;
	Armor getEquipArmor() const;
	std::vector<Weapon> getStoredWeapons() const;
	std::vector<Armor> getStoredArmor() const;

	virtual ~IAttackable() {

	}

protected:
	Weapon equipedWeapon;
	Armor equippedArmor;
	std::vector<Weapon> storedWeapons;
	std::vector<Armor> storedArmor;
private:
};

#endif /* HEADERS_INTERFACES_IAATTACKABLE_H_ */
