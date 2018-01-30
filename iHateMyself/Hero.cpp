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

int Hero::attack() const {
		return getEquipWeapon().getDamage() + getStrengthMod();
}
void Hero::takeDmg(int dmg) {
//	dmg -=
//			(getEquipArmor().getDefense()
//					+ (getStrengthMod() > getDexMod() ?
//							getStrengthMod() : getDexMod()));
//	if (dmg < 0) {
//		dmg = 0;
//	}
	changeHealth(dmg);
}
Hero::HeroRace Hero::getRace() const {
	return race;
}
Hero::HeroClass Hero::getClass() const {
	return cl;
}

std::string Hero::getDesc() const {
	std::string f = std::to_string(getRace()) + ", " + std::to_string(cl) + ", "
			+ getName() + ".";
	return f;
}
int Hero::getCurrentHealth() const {
	return currentHealth;
}
