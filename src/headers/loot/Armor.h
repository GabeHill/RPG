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

	enum ArmorPiece {
		HELMET = "helmet",
		CHESTPLATE = "chestplate",
		GAUNTLETS = "gauntlets",
		PAULDRONS = "pauldrons",
		BOOTS = "boots"
	};

public:
	const ArmorPiece piece;
	const int defense;
	const int rating;
	const int agilityMod;

	Armor(ArmorPiece p, int a, int d, int r);

	std::string toString() const;

protected:
private:

};

#endif /* HEADERS_LOOT_ARMOR_H_ */
