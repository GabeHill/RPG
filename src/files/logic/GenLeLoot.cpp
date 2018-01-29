/*
 * GenLeLoot.cpp
 *
 *  Created on: Jan 26, 2018
 *      Author: owner
 */
#include <cstdint>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "../headers/livingThings/Being.h"
#include "../src/headers/consumables/Berry.h"
#include "../headers/consumables/HealthPot.h"
#include "../headers/consumables/ManaPot.h"
#include "../headers/livingThings/Monster.h"

std::vector<Loot> loots;

int getNumInput() {

	printf("How many loots to generate? 1-%d", INTMAX_MAX);

	// std::cout << "How many loots to generate? 1-" + std::to_string(INT_MAX)
	// 		<< std::endl;

	int in;

	while (true) {
		try {
			std::cin >> in;

			if (in < 1 || in > INTMAX_MAX) {
				throw "error";
			}

			return in;
		} catch (...) {
			std::cout << "Invalid number. Try again." << std::endl;
		}
	}
}

void run() {
	int selection;
	bool quit = false;
	do {

		std::cout
				<< "0) exit\n1) Generate one loot\n2) Generate some loots\n3) Generate n loots\n4) Demonstrate consumable\n"
				<< std::endl;

		selection = getNumInput();
		switch (selection) {
		case 1:
			loots.push_back(genLootItem(genType()));
			break;

		case 2:
			int r = (int) (rand() * 10);
			for (int i = 0; i < r; i++) {
				loots.push_back(genLootItem(genType()));
			}
			break;

		case 3:
			int n = getNumInput();

			for (int i = 0; i < n; i++) {
				loots.push_back(genLootItem(genType()));
			}
			break;

		case 4:

			break;

		default:
			quit = true;
			break;
		}

		for (Loot loot : loots) {
			std::cout << loot.getDesc() << std::endl;
		}

		loots.clear();
	} while (!quit);
}

Loot genLootItem(Loot::LootType t) {
	switch (t) {
	case Loot::GENERIC:
		return Loot(rand() % 7);
		break;
	case Loot::ARMOR:
		return Armor();
		break;
	case Loot::WEAPON:
		return Weapon();
		break;
	case Loot::CONSUMABLE:
//		genConsumable();
		return genConsumable();
		break;
	default:
		break;
	}
}

Monster genMonster(Monster::MonsterType t) {

	return NULL;
}

Loot::LootType genType() {
	int r = rand() % 4;
	switch (r) {
	case 0:
		return Loot::ARMOR;
	case 1:
		return Loot::CONSUMABLE;
	case 2:
		return Loot::WEAPON;
	case 3:
		return Loot::GENERIC;
	default:
		return NULL;
	}
}

Loot genConsumable() {
	int r = rand() % 3;

	switch (r) {
	case 0:
		return HealthPot();
		break;
	case 1:
		return ManaPot();
		break;
	case 2:
		return Berry(rand() % 6);
		break;
	default:
		break;
	}

	return NULL;
}

int main() {
	run();
	return 0;
}
