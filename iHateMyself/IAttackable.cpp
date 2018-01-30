/*
 * IAttackable.cpp
 *
 *  Created on: Jan 29, 2018
 *      Author: owner
 */
#include <vector>

#include "IAttackable.h"

void IAttackable::setEquipWeapon(Weapon w) {
	equipedWeapon = w;
}
void IAttackable::setEquipArmor(Armor w) {
	equippedArmor = w;
}
void IAttackable::storeWeapon(Weapon w) {
	storedWeapons.push_back(w);
}
void IAttackable::storeArmor(Armor w) {
	storedArmor.push_back(w);
}

Weapon IAttackable::getEquipWeapon() const {
	return equipedWeapon;
}
Armor IAttackable::getEquipArmor() const {
	return equippedArmor;
}
std::vector<Weapon> IAttackable::getStoredWeapons() const {
	return storedWeapons;
}
std::vector<Armor> IAttackable::getStoredArmor() const {
	return storedArmor;
}
