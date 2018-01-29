/*
 * Loot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_LOOT_LOOT_H_
#define HEADERS_LOOT_LOOT_H_
class Loot {

public:

	enum LootType {
		ARMOR/* = "Armor"*/,
		CONSUMABLE /*= "Consumable"*/,
		WEAPON /*= "Weapon"*/,
		GENERIC /*= "Generic"*/,
	};

	enum GenericLoot {
		PELT /*= "pelt"*/,
		CHAIR /*= "chair"*/,
		POT /*= "pot"*/,
		RUG /*= "rug"*/,
		BUCKET /*= "bucket"*/,
		HAT /*= "hat"*/,
		CLOTH /*= "cloth"*/
	};

	Loot(GenericLoot g);
	Loot(int n);

	Loot(LootType t, int val);

	int getValue() const;
	std::string getDesc() const;

protected:
private:
	std::string name;
	LootType type;

	int value;
};

#endif /* HEADERS_LOOT_LOOT_H_ */
