/*
 * GenLeLoot.cpp
 *
 *  Created on: Jan 26, 2018
 *      Author: owner
 */
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "../iHateMyself/Being.h"
#include "../iHateMyself/Berry.h"
#include "../iHateMyself/HealthPot.h"
#include "../iHateMyself/Monster.h"
#include "../iHateMyself/ManaPot.h"
#include "../iHateMyself/IConsumable.h"
#include "../iHateMyself/Hero.h"

std::vector<Loot> loots;


int GetNumInput(int min, int max) {
	int in;
	while (true) {
		if (!(std::cin >> in)) {
			std::cerr << "Integers only please." << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		} else {
		if (in < min || in > max) {
			std::cerr << "Error. Bad input." << std::endl;
		} else {
			return in;
			}
		}
	}
}

Armor* GenArmor() {
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

Berry::BerryType GenBerryType(int h) {
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

IConsumable* GenConsumable() {
	int r = rand() % 3;

	switch (r) {
	case 0:
		return new HealthPot();
	case 1:
		return new ManaPot();
	default:
		return new Berry(GenBerryType(rand() % 6));
	}
}

Weapon::WeaponType GenWeaponType() {
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

Loot* GenLootItem(Loot::LootType t) {
	switch (t) {
	case Loot::GENERIC:
		return new Loot(rand() % 7);
	case Loot::ARMOR:
		return GenArmor();
	case Loot::WEAPON:
		return new Weapon(GenWeaponType(), (rand() % 50), (rand() % 50) + 50);
	default:
		return dynamic_cast<Loot*>(GenConsumable());
	}
}

Monster GenMonster(Monster::MonsterType t, bool isBoss, std::string n) {
		return Monster((rand() % 27) + 3, (rand() % 27) + 3, (rand() % 27) + 3,
				n, t, isBoss);
}


Hero GenHero(Hero::HeroClass t, Hero::HeroRace r, std::string n) {
	return Hero((rand() % 27) + 3, (rand() % 27) + 3, (rand() % 27) + 3, n, r,
			t);
}


Loot::LootType GenType() {
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

void UseOn(Being* b, IConsumable* l) {
	std::cout << l->GetDesc() << std::endl;
	std::cout << b->GetDesc() << std::endl;
	l->Use(b);
	std::cout << b->GetDesc() << std::endl;
}

void Attack(IAttackable* b1, IAttackable* b2) {
	std::cout << b1->GetDesc() + " " + std::to_string(b1->GetCurrentHealth())
			<< std::endl;
	std::cout << b2->GetDesc() + " " + std::to_string(b2->GetCurrentHealth())
			<< std::endl;
	b1->TakeDmg(b2->Attack());
	std::cout << b1->GetDesc() + " " + std::to_string(b1->GetCurrentHealth())
			<< std::endl;
	std::cout << b2->GetDesc() + " " + std::to_string(b2->GetCurrentHealth())
			<< std::endl;
}


bool Demo(int num) {
	auto consum = GenConsumable();
	Hero dum = GenHero(Hero::FIGHTER, Hero::HUMAN, "Human");
	Hero* dummy = &dum;
	Monster mon = GenMonster(Monster::TROLL, false, "monster");
	Monster* monster = &mon;
	switch (num) {
	case 1:
		UseOn(dummy, consum);
		break;
	case 2:
		Attack(monster, dummy);
		break;
	case 3:
		Attack(dummy, monster);
		break;
	default:
		return true;
	}
	return false;
}



void Run() {
	srand(time(NULL));
	int selection;
	bool quit = false;
	int q;
	Loot::LootType t;
	do {
		std::cout
				<< "0) Exit\n1) Generate one loot\n2) Generate some loots\n3) Generate n loots\n4) Demonstrate"
				<< std::endl;

		selection = GetNumInput(0, 4);
		switch (selection) {
		case 1:

			t = GenType();
			if (t != Loot::CONSUMABLE) {
				loots.push_back(*GenLootItem(t));
			} else {
				loots.push_back(*dynamic_cast<Loot*>(GenConsumable()));
			}
			break;

		case 2:
			q = (rand() % 10) + 1;
			for (int i = 0; i < q; i++) {
				t = GenType();
				if (t != Loot::CONSUMABLE) {
					loots.push_back(*GenLootItem(t));
				} else {
					loots.push_back(*dynamic_cast<Loot*>(GenConsumable()));
				}
			}
			break;

		case 3:

			std::cout << "How many loots to generate? 1-1000" << std::endl;

			q = GetNumInput(1, 1000);

			for (int i = 0; i < q; i++) {
				t = GenType();
				if (t != Loot::CONSUMABLE) {
					loots.push_back(*GenLootItem(t));
				} else {
					loots.push_back(*dynamic_cast<Loot*>(GenConsumable()));
				}
			}
			break;

		case 4:
			std::cout
					<< "What would you like demonstrated?\n0) Exit\n1) Random consumable\n2) Hero attack monster\n3) Monster attack hero"
					<< std::endl;

			q = GetNumInput(0, 3);
			quit = Demo(q);


			break;

		default:
			quit = true;
			break;
		}

		for (Loot loot : loots) {
			std::cout << loot.GetDesc() << std::endl;
		}
		std::cout << std::endl;

		loots.clear();
	} while (!quit);
}

int main() {
	Run();
	return 0;
}
