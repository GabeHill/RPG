/*
 * Armor.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include "../iHateMyself/Armor.h"

#include <string>

//#include "Loot.h"
Armor::Armor() :
		Loot(ARMOR, 0) {
	piece = GAUNTLETS;
	agilityMod = 0;
	defense = 0;
	rating = 0;
}

Armor::Armor(ArmorPiece p, int a, int d, int r) :
		Loot(ARMOR, (rand() % ((d + r) - a)) + 20) {
	piece = p;
	agilityMod = a;
	defense = d;
	rating = r;
}

std::string Armor::GetPiece() const {
	return pieceNames[piece];
}
int Armor::GetDefense() const {
	return defense;
}
int Armor::GetRating() const {
	return rating;
}
int Armor::GetAgilityMod() const {
	return agilityMod;
}

std::string Armor::GetDesc() const {
	return piece + ", " + std::to_string(agilityMod) + " less agility, "
			+ std::to_string(defense) + " defense, " + std::to_string(rating)
			+ " rating.";
}
/*
 std::ostream& operator<<(std::ostream& lhs, Armor::ArmorPiece e) {
 switch (e) {
 case Armor::HELMET:
 lhs << "helmet";
 break;
 case Armor::CHESTPLATE:
 lhs << "chestplate";
 break;
 case Armor::GAUNTLETS:
 lhs << "gauntlets";
 break;
 case Armor::PAULDRONS:
 lhs << "pauldrons";
 break;
 case Armor::BOOTS:
 lhs << "boots";
 break;
 }
 return lhs;
 }*/
