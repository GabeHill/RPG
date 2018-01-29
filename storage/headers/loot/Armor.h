/*
 * Armor.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_LOOT_ARMOR_H_
#define HEADERS_LOOT_ARMOR_H_

#include "Loot.h"

class Armor: public Loot {
public:
	Armor(std::string t);

	int getAgilityMod() const;
	int getDefense() const;
	int getRating() const;
	std::string toString() const;

protected:
private:
	const std::string title;
	const int defense;
	const int rating;
	const int agilityMod;
};

#endif /* HEADERS_LOOT_ARMOR_H_ */
