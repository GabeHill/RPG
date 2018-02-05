/*
 * IAttackable.cpp
 *
 *  Created on: Jan 29, 2018
 *      Author: owner
 */
#include <vector>

#include "IAttackable.h"

void IAttackable::SetEquipWeapon(Weapon* w) {
	equipedWeapon = w;
}
void IAttackable::SetEquipArmor(Armor* w) {
	equippedArmor = w;
}
void IAttackable::StoreWeapon(Weapon &w) {
	storedWeapons.push_back(w);
}
void IAttackable::StoreArmor(Armor &w) {
	storedArmor.push_back(w);
}

Weapon* IAttackable::GetEquipWeapon() const {
	return equipedWeapon;
}
Armor* IAttackable::GetEquipArmor() const {
	return equippedArmor;
}
std::vector<Weapon> IAttackable::GetStoredWeapons() const {
	return storedWeapons;
}
std::vector<Armor> IAttackable::GetStoredArmor() const {
	return storedArmor;
}
