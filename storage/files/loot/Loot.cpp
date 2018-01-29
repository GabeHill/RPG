/*
 * Loot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */
#include <string>

#include "../loot/Loot.h"

Loot::Loot() {

}
Loot::Loot(LootType t, int val) {

}

std::string Loot::getName() const {
	return "";
}
int Loot::getValue() const {
	return 0;
}
Loot::LootType Loot::getType() const {
	return GENERIC;
}
std::string Loot::toString() const {
	return "";
}
