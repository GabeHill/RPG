/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#include "../iHateMyself/Hero.h"

#include "Weapon.h"

Hero::Hero(int i, int s, int d, std::string n, HeroRace r, HeroClass c) :
		Being(i, s, d, n) {
	race = r;
	cl = c;
}

int Hero::Attack() const {
	return GetEquipWeapon().GetDamage() + GetStrengthMod();
}
void Hero::TakeDmg(int dmg) {
//	dmg -=
//			(getEquipArmor().getDefense()
//					+ (getStrengthMod() > getDexMod() ?
//							getStrengthMod() : getDexMod()));
//	if (dmg < 0) {
//		dmg = 0;
//	}
	ChangeHealth(dmg);
}
std::string Hero::GetRace() const {
	return raceNames[race];
}
std::string Hero::GetClass() const {
	return classNames[cl];
}

std::string Hero::GetDesc() const {
	std::string f = GetRace() + ", " + GetClass() + ", "
			+ GetName() + ".";
	return f;
}
int Hero::GetCurrentHealth() const {
	return currentHealth;
}
