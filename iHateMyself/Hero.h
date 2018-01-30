/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#ifndef HEADERS_HERO_H_
#define HEADERS_HERO_H_

#include "../iHateMyself/Being.h"
#include "IAttackable.h"

class Hero: public Being, IAttackable {
public:

	enum HeroRace {
		DRAGONBORN, TAXABI, ELF, HALFLING, TIEFLING, HUMAN
	};
	enum HeroClass {
		ROUGE, RANGER, WIZARD, FIGHTER, BARBARIAN, CLERIC, MONK
	};

	Hero(int i, int s, int d, std::string n, HeroRace r, HeroClass c);

	int attack() const;
	void takeDmg(int dmg);
	HeroRace getRace() const;
	HeroClass getClass() const;
	std::string getDesc() const;

	~Hero() {
	}
protected:
private:
	std::vector<Loot> loots[20];
	HeroRace race;
	HeroClass cl;
};

#endif /* HEADERS_MONSTER_H_ */
