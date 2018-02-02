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
	virtual int Attack() const=0;
	virtual void TakeDmg(int dmg)=0;
	virtual std::string GetDesc() const=0;
	virtual int GetCurrentHealth() const=0;


	void SetEquipWeapon(Weapon w);
	void SetEquipArmor(Armor w);
	void StoreWeapon(Weapon w);
	void StoreArmor(Armor w);

	Weapon GetEquipWeapon() const;
	Armor GetEquipArmor() const;
	std::vector<Weapon> GetStoredWeapons() const;
	std::vector<Armor> GetStoredArmor() const;

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
