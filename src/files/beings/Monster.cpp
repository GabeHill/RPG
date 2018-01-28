/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#include "Monster.h"

Monster::Monster(int i, int s, int d, std::string n, MonsterType t, bool isBoss) :
		Being(i, s, d, n) {
	type = t;
	boss = isBoss;
}
Monster::Monster(int i, int s, int d, MonsterType t) :
		Being(i, s, d) {
	type = t;

}

int Monster::attack() const {
	return getStrengthMod() * 2;
}
void Monster::takeDmg(int dmg) {
	dmg -= (getStrengthMod() > getDexMod() ? getStrengthMod() : getDexMod());
	dmg >= 0 ? dmg : 0;
	changeHealth(dmg);
}

std::string Monster::toString() const {
	return type + ", is " + (boss ? "" : "not") + " a boss.";
}
