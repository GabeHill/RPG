/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */
#include <iostream>
#include "../iHateMyself/Monster.h"

Monster::Monster(int i, int s, int d, std::string n, MonsterType t, bool isBoss) :
		Being(i, s, d, n) {
	type = t;
	boss = isBoss;
}

int Monster::Attack() const {
	return GetStrengthMod() * 2;
}
void Monster::TakeDmg(int dmg) {
//	dmg -= (getStrengthMod() > getDexMod() ? getStrengthMod() : getDexMod());
//	if (dmg < 0) {
//		dmg = 0;
//	}
	ChangeHealth(dmg);
}
bool Monster::IsBoss() const {
	return boss;
}
std::string Monster::GetType() const {
	return typeNames[type];
}
std::string Monster::GetDesc() const {
	std::string f = GetType() + ", is " + (boss ? "" : "not") + " a boss.";
	return f;
}
int Monster::GetCurrentHealth() const {
	return currentHealth;
}
