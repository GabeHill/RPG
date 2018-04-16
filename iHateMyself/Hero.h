/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#ifndef HEADERS_HERO_H_
#define HEADERS_HERO_H_

#include <string>

#include "../iHateMyself/Being.h"
#include "IAttackable.h"

class Hero: public Being, public IAttackable {
public:

	enum HeroRace {
		DRAGONBORN, TAXABI, ELF, HALFLING, TIEFLING, HUMAN
	};
	enum HeroClass {
		ROUGE, RANGER, WIZARD, FIGHTER, BARBARIAN, CLERIC, MONK
	};

	const std::vector<std::string> raceNames = { "dragonborn", "taxabi", "elf",
			"halfling", "tiefling", "human" };
	const std::vector<std::string> classNames = { "rouge", "ranger", "wizard",
			"fighter", "barbarian", "cleric", "monk" };

	Hero(int i, int s, int d, std::string n, HeroRace r, HeroClass c);

	int Attack() const;
	void TakeDmg(int dmg);
	std::string GetRace() const;
	std::string GetClass() const;
	std::string GetDesc() const override;
	int GetCurrentHealth() const override;
	~Hero() {
	}
protected:
private:
	std::vector<Loot> loots[20];
	HeroRace race;
	HeroClass cl;
};

#endif /* HEADERS_MONSTER_H_ */
