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
	dmg -=
			(getEquipArmor().getDefense()
					+ (getStrengthMod() > getDexMod() ?
							getStrengthMod() : getDexMod()));
	if (dmg < 0) {
		dmg = 0;
	}
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

/*
std::ostream& operator<<(std::ostream& out, Hero::HeroRace e) {
	switch (e) {
	case Hero::DRAGONBORN:
		out << "dragonborn";
		break;
	case Hero::TAXABI:
		out << "taxabi";
		break;
	case Hero::ELF:
		out << "elf";
		break;
	case Hero::HALFLING:
		out << "halfling";
		break;
	case Hero::TIEFLING:
		out << "tiefling";
		break;
	case Hero::HUMAN:
		out << "human";
		break;
	}
	return out;
}

std::ostream& operator<<(std::ostream& out, Hero::HeroClass e) {
	switch (e) {
	case Hero::ROUGE:
		out << "rouge";
		break;
	case Hero::RANGER:
		out << "ranger";
		break;
	case Hero::WIZARD:
		out << "wizard";
		break;
	case Hero::FIGHTER:
		out << "fighter";
		break;
	case Hero::BARBARIAN:
		out << "barbarian";
		break;
	case Hero::CLERIC:
		out << "cleric";
		break;
	case Hero::MONK:
		out << "monk";
		break;
	}
	return out;
 }*/
