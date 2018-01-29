/*
 * Armor.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include <string>

#include "../headers/loot/Armor.h"
#include "../headers/loot/Loot.h"

Armor::Armor(ArmorPiece p, int a, int d, int r) :
		Loot(ARMOR, (rand() % ((d+r)-a)) + 20) {
	piece = p;
	agilityMod = a;
	defense = d;
	rating = r;
}

Armor::ArmorPiece Armor::getPiece()const{
	return piece;
}
int Armor::getDefense()const{
	return defense;
}
int Armor::getRating()const{
	return rating;
}
int Armor::getAgilityMod()const{
	return agilityMod;
}

std::string Armor::toString() const {
	return piece + ", " +std::to_string( agilityMod )+ " less agility, " +std::to_string( defense)
			+ " defense, " + std::to_string(rating) + " rating.";
}
