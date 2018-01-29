/*
 * Monster.h
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#include "../livingThings/Hero.h"

Hero::Hero(int i, int s, int d, std::string n, HeroRace r, HeroClass c) :
		Being(i, s, d, n) {
	race = r;
	cl = c;
}

