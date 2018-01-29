/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#ifndef HEADERS_MONSTER_H_
#define HEADERS_MONSTER_H_

#include "../livingThings/Being.h"
#include "../headers/interfaces/IAattackable.h"

class Monster: public Being, IAttackable {
public:
	enum MonsterType {
		ORC /*= "orc"*/,
		DRAGON /*= "dragon"*/,
		GOBLIN /*= "goblin"*/,
		KOBOLD /*= "kobold"*/,
		TROLL /*= "troll"*/,
		GIANT /*= "giant"*/
	};

	const bool boss;
	const MonsterType type;

	Monster(int i, int s, int d, std::string n, MonsterType t, bool isBoss);
	Monster(int i, int s, int d, MonsterType t);

	int attack() const;
	void takeDmg(int dmg);

	std::string toString() const;

protected:
private:
};

#endif /* HEADERS_MONSTER_H_ */
