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

	enum MonsterType {
		ORC, DRAGON, GOBLIN, KOBOLD, TROLL, GIANT
	};

public:
	const bool isBoss;
	const MonsterType type;

	Monster(int i, int s, int d, std::string n, MonsterType t, bool isBoss);
	Monster(int i, int s, int d, MonsterType t);

protected:
private:
};



#endif /* HEADERS_MONSTER_H_ */
