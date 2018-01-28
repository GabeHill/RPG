/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#ifndef HEADERS_HERO_H_
#define HEADERS_HERO_H_

#include "../livingThings/Being.h"
#include "../headers/interfaces/IAattackable.h"

class Hero: public Being, IAttackable {

	enum HeroRace {
		DRAGONBORN = "dragonborn",
		TAXABI = "taxabi",
		ELF = "elf",
		HALFLING = "halfling",
		TIEFLING = "tiefling",
		HUMAN = "human",
	};
	enum HeroClass {
		ROUGE = "rouge",
		RANGER = "ranger",
		WIZARD = "wizard",
		FIGHTER = "fighter",
		BARBARIAN = "barbarian",
		CLERIC = "cleric",
		MONK = "monk"
	};

public:
	const HeroRace race;
	const HeroClass cl;

	Hero(int i, int s, int d, std::string n, HeroRace r, HeroClass c);

	int attack() const;
	void takeDmg(int dmg);

	std::string toString() const;

protected:
private:
	std::array<Loot, 20> loots;
};

#endif /* HEADERS_MONSTER_H_ */
