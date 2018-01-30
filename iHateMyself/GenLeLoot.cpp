/*
 * GenLeLoot.cpp
 *
 *  Created on: Jan 26, 2018
 *      Author: owner
 */
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "../iHateMyself/Being.h"
#include "../iHateMyself/Berry.h"
#include "../iHateMyself/HealthPot.h"
#include "Monster.h"
#include "ManaPot.h"
#include "IConsumable.h"
#include "Hero.h"

std::vector<Loot> loots;


int getNumInput(int min) {

	int in;

	while (true) {
		try {
			std::cin >> in;

			if (in < min || in > INT_MAX) {
				throw "error";
			}

			return in;
		} catch (...) {
			std::cout << "Invalid number. Try again." << std::endl;
		}
	}
}

Armor* genArmor() {
	switch (rand() % 5) {
	case 0:
		return new Armor(Armor::HELMET, 0 - (rand() % 3), (rand() % 6) + 1,
				(rand() % 4) + 1);
	case 1:
		return new Armor(Armor::CHESTPLATE, 0 - ((rand() % 4) + 2),
				(rand() % 9) + 1, (rand() % 4) + 1);
	case 2:
		return new Armor(Armor::GAUNTLETS, 0 - (rand() % 2), (rand() % 5) + 1,
				(rand() % 4) + 1);
	case 3:
		return new Armor(Armor::PAULDRONS, 0 - (rand() % 4), (rand() % 7) + 1,
				(rand() % 4) + 1);
	default:
		return new Armor(Armor::BOOTS, 0 - (rand() % 2), (rand() % 5) + 1,
				(rand() % 4) + 1);
	}
}

Berry::BerryType genBerryType(int h) {
	switch (h) {
	case 0:
		return Berry::CRABAPPLE;
	case 1:
		return Berry::BLUEBERRY;
	case 2:
		return Berry::RASBERRY;
	case 3:
		return Berry::JUNIPER;
	case 4:
		return Berry::YEW;
	default:
		return Berry::NIGHTSHADE;
	}
}

IConsumable* genConsumable() {
	int r = rand() % 3;

	switch (r) {
	case 0:
		return new HealthPot();
	case 1:
		return new ManaPot();
	default:
		return new Berry(genBerryType(rand() % 6));
	}
}

Weapon::WeaponType genWeaponType() {
	switch (rand() % 5) {
	case 0:
		return Weapon::MACE;
	case 1:
		return Weapon::SWORD;
	case 2:
		return Weapon::BOW;
	case 3:
		return Weapon::DAGGER;
	default:
		return Weapon::AXE;
	}
}

Loot* genLootItem(Loot::LootType t) {
	switch (t) {
	case Loot::GENERIC:
		return new Loot(rand() % 7);
	case Loot::ARMOR:
		return genArmor();
	case Loot::WEAPON:
		return new Weapon(genWeaponType(), (rand() % 50), (rand() % 50) + 50);
	default:
		return (Loot*) genConsumable();
	}
}

Monster genMonster(Monster::MonsterType t, bool isBoss, std::string n) {
		return Monster((rand() % 27) + 3, (rand() % 27) + 3, (rand() % 27) + 3,
				n, t, isBoss);
}


Hero genHero(Hero::HeroClass t, Hero::HeroRace r, std::string n) {
	return Hero((rand() % 27) + 3, (rand() % 27) + 3, (rand() % 27) + 3, n, r,
			t);
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
	default:
		return Loot::GENERIC;
	}
}

void useOn(Being* b, IConsumable* l) {
	std::cout << l->getDesc() << std::endl;
	std::cout << b->getDesc() << std::endl;
	l->use(b);
	std::cout << b->getDesc() << std::endl;
}

void attack(IAttackable* b1, IAttackable* b2) {
	std::cout << b1->getDesc() + " " + std::to_string(b1->getCurrentHealth())
			<< std::endl;
	std::cout << b2->getDesc() + " " + std::to_string(b2->getCurrentHealth())
			<< std::endl;
	b1->takeDmg(b2->attack());
	std::cout << b1->getDesc() + " " + std::to_string(b1->getCurrentHealth())
			<< std::endl;
	std::cout << b2->getDesc() + " " + std::to_string(b2->getCurrentHealth())
			<< std::endl;
}


bool demo(int num) {
	auto consum = genConsumable();
	Hero dum = genHero(Hero::FIGHTER, Hero::HUMAN, "Human");
	Hero* dummy = &dum;
	Monster mon = genMonster(Monster::TROLL, false, "monster");
	Monster* monster = &mon;
	switch (num) {
	case 1:
		useOn(dummy, consum);
		break;
	case 2:
		attack(dummy, monster);
		break;
	case 3:
		attack(monster, dummy);
		break;
	default:
		return true;
	}
	return false;
}



void run() {
	srand(time(NULL));
	int selection;
	bool quit = false;
	int q;
	Loot::LootType t;
	do {
		std::cout
				<< "0) exit\n1) Generate one loot\n2) Generate some loots\n3) Generate n loots\n4) Demonstrate"
				<< std::endl;

		selection = getNumInput(0);
		switch (selection) {
		case 1:

			t = genType();
			if (t != Loot::CONSUMABLE) {
				loots.push_back(*genLootItem(t));
			} else {
				loots.push_back(*(Loot*) genConsumable());
			}
			break;

		case 2:
			q = (rand() % 10) + 1;
			for (int i = 0; i < q; i++) {
				t = genType();
				if (t != Loot::CONSUMABLE) {
					loots.push_back(*genLootItem(t));
				} else {
					loots.push_back(*(Loot*) genConsumable());
				}
			}
			break;

		case 3:

			printf("How many loots to generate? 1-%d", INT_MAX);

			q = getNumInput(1);

			for (int i = 0; i < q; i++) {
				t = genType();
				if (t != Loot::CONSUMABLE) {
					loots.push_back(*genLootItem(t));
				} else {
					loots.push_back(*(Loot*) genConsumable());
				}
			}
			break;

		case 4:
			std::cout
					<< "What would you like demonstrated?\n0) Exit\n1) Random consumable\n2) Hero attack monster\n3) Monster attack hero"
					<< std::endl;

			q = getNumInput(0);
			quit = demo(q);


			break;

		default:
			quit = true;
			break;
		}

		for (Loot loot : loots) {
			std::cout << loot.getDesc() << std::endl;
		}
		std::cout << std::endl;

		loots.clear();
	} while (!quit);
}

int main() {
	run();
	return 0;
}
