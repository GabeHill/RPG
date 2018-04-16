/*
 * Loot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_LOOT_LOOT_H_
#define HEADERS_LOOT_LOOT_H_
#include <string>
#include <vector>

class Loot {
public:

	enum LootType {
		ARMOR, CONSUMABLE, WEAPON, GENERIC,
	};

	enum GenericLoot {
		PELT, CHAIR, POT, RUG, BUCKET, HAT, CLOTH
	};

	const std::vector<std::string> lootNames = { "armor", "consumable",
			"weapon", "generic" };
	const std::vector<std::string> genericLootNames = { "pelt", "chair", "pot",
			"rug", "bucket", "hat", "cloth" };

	Loot(GenericLoot g);
	Loot(int n);
	Loot(LootType t, int val);

	std::string GetName() const;
	int GetValue() const;
	std::string GetType() const;
	std::string GetDesc() const;
protected:
private:
	std::string name;
	int value;
	LootType type;
};

#endif /* HEADERS_LOOT_LOOT_H_ */
