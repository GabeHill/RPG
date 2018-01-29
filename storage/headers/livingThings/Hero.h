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
		DRAGONBORN, TAXABI, ELF, HALFLING, TIEFLING, HUMAN,
	};
	enum HeroClass {
		ROUGE, RANGER, WIZARD, FIGHTER, BARBARIAN, CLERIC, MONK,
	};

public:
	const HeroRace race;
	const HeroClass cl;

	Hero(int i, int s, int d, std::string n, HeroRace r, HeroClass c);

protected:
private:
	std::array<Loot, 20> loots;
};

#endif /* HEADERS_MONSTER_H_ */
