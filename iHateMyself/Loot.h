/*
 * Loot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_LOOT_LOOT_H_
#define HEADERS_LOOT_LOOT_H_
#include <string>
#include <map>

class Loot {
public:

	enum LootType {
		ARMOR, CONSUMABLE, WEAPON, GENERIC,
	};

	enum GenericLoot {
		PELT, CHAIR, POT, RUG, BUCKET, HAT, CLOTH
	};


	Loot(GenericLoot g);
	Loot(int n);
	Loot(LootType t, int val);

	std::string getName() const;
	int getValue() const;
	LootType getType() const;
	std::string getDesc() const;
protected:
private:
	std::string name;
	int value;
	LootType type;
};

#endif /* HEADERS_LOOT_LOOT_H_ */
