/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#include "../livingThings/Hero.h"

Hero::Hero(int i, int s, int d, std::string n, HeroRace r, HeroClass c) :
		Being(i, s, d, n) {
	race = r;
	cl = c;
}

int Hero::attack() const {
	if (getEquipWeapon() != NULL) {
		return getEquipWeapon().getDamage() + getStrengthMod();
	} else {
		return getStrengthMod() * 2;
	}
}
void Hero::takeDmg(int dmg) {
	dmg -=
			(getEquipArmor().defense
					+ (getStrengthMod() > getDexMod() ?
							getStrengthMod() : getDexMod()));
	dmg >= 0 ? dmg : 0;
	changeHealth(dmg);
}

std::string Hero::toString() const {
	return race + ", " + cl + ", " + name + ".";
}
