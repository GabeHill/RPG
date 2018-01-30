/*
 * Armor.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_LOOT_ARMOR_H_
#define HEADERS_LOOT_ARMOR_H_

#include "../iHateMyself/Loot.h"

class Armor: public Loot {
public:

	enum ArmorPiece {
		HELMET, CHESTPLATE, GAUNTLETS, PAULDRONS, BOOTS
	};

	Armor();
	Armor(ArmorPiece p, int a, int d, int r);

	ArmorPiece getPiece() const;
	int getDefense() const;
	int getRating() const;
	int getAgilityMod() const;
	std::string getDesc() const;

protected:
private:
	ArmorPiece piece;
	int defense;
	int rating;
	int agilityMod;
};

#endif /* HEADERS_LOOT_ARMOR_H_ */
