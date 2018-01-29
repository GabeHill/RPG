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
		HELMET /*= "helmet"*/,
		CHESTPLATE /*= "chestplate"*/,
		GAUNTLETS /*= "gauntlets"*/,
		PAULDRONS /*= "pauldrons"*/,
		BOOTS /*= "boots"*/
	};

public:

	Armor(ArmorPiece p, int a, int d, int r);

	ArmorPiece getPiece() const;
	int getDefense() const;
	int getRating() const;
	int getAgilityMod() const;
	std::string toString() const;

protected:
private:
	ArmorPiece piece;
	int defense;
	int rating;
	int agilityMod;
};

#endif /* HEADERS_LOOT_ARMOR_H_ */
