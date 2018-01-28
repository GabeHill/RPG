/*
 * Armor.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include <string>

#include "../loot/Loot.h"
#include "../loot/Armor.h"

Armor::Armor(ArmorPiece p, int a, int d, int r) :
		Loot(ARMOR, (rand() % 100) + 1) {
	piece = p;
	agilityMod = a;
	defense = d;
	rating = r;
}

std::string Armor::toString() const {
	return piece + ", " + agilityMod + " less agility, " + defense
			+ " defense, " + rating + " rating.";
}
