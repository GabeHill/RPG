/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#include "../iHateMyself/Monster.h"

Monster::Monster(int i, int s, int d, std::string n, MonsterType t, bool isBoss) :
		Being(i, s, d, n) {
	type = t;
	boss = isBoss;
}

int Monster::attack() const {
	return getStrengthMod() * 2;
}
void Monster::takeDmg(int dmg) {
	dmg -= (getStrengthMod() > getDexMod() ? getStrengthMod() : getDexMod());
	if (dmg < 0) {
		dmg = 0;
	}
	changeHealth(dmg);
}
bool Monster::isBoss() const {
	return boss;
}
Monster::MonsterType Monster::getType() const {
	return type;
}
std::string Monster::getDesc() const {
	std::string f = std::to_string(getType()) + ", is " + (boss ? "" : "not")
			+ " a boss.";
	return f;
}

/*
std::ostream& operator<<(std::ostream& out, Monster::MonsterType e) {
	switch (e) {
	case Monster::ORC:
		out << "orc";
		break;
	case Monster::DRAGON:
		out << "dragon";
		break;
	case Monster::GOBLIN:
		out << "goblin";
		break;
	case Monster::KOBOLD:
		out << "kobold";
		break;
	case Monster::TROLL:
		out << "troll";
		break;
	case Monster::GIANT:
		out << "giant";
		break;
	}
	return out;
 }*/
