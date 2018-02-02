/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#ifndef HEADERS_MONSTER_H_
#define HEADERS_MONSTER_H_

#include "../iHateMyself/Being.h"
#include "IAttackable.h"

class Monster: public Being, public IAttackable {
public:
	enum MonsterType {
		ORC, DRAGON, GOBLIN, KOBOLD, TROLL, GIANT
	};

	std::array<std::string, 6> typeNames = { "orc", "dragon", "goblin",
			"kobold", "troll", "giant" };

	Monster(int i, int s, int d, std::string n, MonsterType t, bool isBoss);

	int Attack() const;
	void TakeDmg(int dmg);
	bool IsBoss() const;
	std::string GetType() const;
	std::string GetDesc() const override;
	int GetCurrentHealth() const override;
	~Monster() {
	}

protected:
private:
	bool boss;
	MonsterType type;
};

#endif /* HEADERS_MONSTER_H_ */
