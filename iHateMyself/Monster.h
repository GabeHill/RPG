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

	Monster(int i, int s, int d, std::string n, MonsterType t, bool isBoss);

	int attack() const;
	void takeDmg(int dmg);
	bool isBoss() const;
	MonsterType getType() const;
	std::string getDesc() const override;
	int getCurrentHealth() const override;
	~Monster() {
	}

protected:
private:
	bool boss;
	MonsterType type;
};

#endif /* HEADERS_MONSTER_H_ */
