/*
 * Loot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_LOOT_LOOT_H_
#define HEADERS_LOOT_LOOT_H_

class Loot {

	enum LootType {
		ARMOR, CONSUMABLE, WEAPON, GENERIC,
	};

	enum GenericLoot {
		PELT, CHAIR, POT, RUG, BUCKET, HAT, CLOTH
	};

public:
	Loot();
	Loot(LootType t, int val);

	std::string getName() const;
	int getValue() const;
	LootType getType() const;
	std::string toString() const;

protected:
private:
	const std::string name;
	int value;
	const LootType type;
};

#endif /* HEADERS_LOOT_LOOT_H_ */
