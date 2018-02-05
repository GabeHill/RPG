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

	const std::vector<std::string> pieceNames = { "helmet", "chestplate",
			"gauntlets", "pauldrons", "boots" };

	Armor();
	Armor(ArmorPiece p, int a, int d, int r);

	std::string GetPiece() const;
	int GetDefense() const;
	int GetRating() const;
	int GetAgilityMod() const;
	std::string GetDesc() const;

protected:
private:
	ArmorPiece piece;
	int defense;
	int rating;
	int agilityMod;
};

#endif /* HEADERS_LOOT_ARMOR_H_ */
