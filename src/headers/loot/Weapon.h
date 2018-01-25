/*
 * Weapon.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_LOOT_WEAPON_H_
#define HEADERS_LOOT_WEAPON_H_

#include "Loot.h"


class Weapon: public Loot {
public:
	Weapon(std::string t);

	int getDamage() const;
	std::string toString() const;
protected:
private:
	const std::string title;
	const int damageMin;
	const int damageMax;


};



#endif

