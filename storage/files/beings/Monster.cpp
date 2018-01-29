/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#include "Monster.h"

Monster::Monster(int i, int s, int d, std::string n, MonsterType t, bool isBoss) :
		Being(i, s, d, n) {
	type = t;
	this->boss = isBoss;
}
Monster::Monster(int i, int s, int d, MonsterType t) :
		Being(i, s, d) {
	type = t;

}
;

