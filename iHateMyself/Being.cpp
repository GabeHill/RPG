/*
 * Being.cpp
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#include "../iHateMyself/Being.h"

Being::Being(std::string n) {
	name = n;
	ChangeStrength(1);
	ChangeDexterity(1);
	ChangeIntelligence(1);
	SetModifiers();
	SetMaxHealth(1, true);
	SetMaxMana(0, true);
}
Being::Being(int i, int s, int d, std::string n) {
	name = n;
	ChangeStrength(s);
	ChangeDexterity(d);
	ChangeIntelligence(i);
	SetModifiers();
	SetMaxHealth(10 * s, true);
	SetMaxMana(5 * i, true);
}
Being::Being(int i, int s, int d) {
	name = "None";
	ChangeStrength(s);
	ChangeDexterity(d);
	ChangeIntelligence(i);
	SetModifiers();
	SetMaxHealth(10 * s, true);
	SetMaxMana(5 * i, true);
}

void Being::ChangeIntelligence(int changeBy) {
	intelligence += changeBy;
	intelligence = intelligence > 30 ? 30 : intelligence;
	intelligence = intelligence < 0 ? 0 : intelligence;
	currentHealth = intelligence > 0 ? currentHealth : 0;
}
void Being::ChangeStrength(int changeBy) {
	strength += changeBy;
	strength = strength > 30 ? 30 : strength;
	strength = strength < 0 ? 0 : strength;
	currentHealth = strength > 0 ? currentHealth : 0;
}
void Being::ChangeDexterity(int changeBy) {
	dexterity += changeBy;
	dexterity = dexterity > 30 ? 30 : dexterity;
	dexterity = dexterity < 0 ? 0 : dexterity;
	currentHealth = dexterity > 0 ? currentHealth : 0;
}

void Being::ChangeHealth(int changeBy) {
	currentHealth += changeBy;
	currentHealth = currentHealth > maxHealth ? maxHealth : currentHealth;
	currentHealth = currentHealth < 0 ? 0 : currentHealth;
}
void Being::ChangeMana(int changeBy) {
	currentMana += changeBy;
	currentMana = currentMana > maxMana ? maxMana : currentMana;
	currentMana = currentMana < 0 ? 0 : currentMana;
}
void Being::ChangeArmor(int changeBy) {
	armorClass += changeBy;
	armorClass = armorClass > 20 ? 20 : armorClass;
	armorClass = armorClass < 0 ? 0 : armorClass;
}
void Being::SetMaxHealth(int max, bool restoreAll) {
	maxHealth = max;
	maxHealth = maxHealth < 0 ? 0 : maxHealth;
	currentHealth = restoreAll ? maxHealth : currentHealth;
}
void Being::SetMaxMana(int max, bool restoreAll) {
	maxMana = max;
	maxMana = maxMana < 0 ? 0 : maxMana;
	currentMana = restoreAll ? maxMana : currentMana;
}

int Being::GetIntelligence() const {
	return intelligence;
}
int Being::GetIntelMod() const {
	return intelligenceMod;
}
int Being::GetStrength() const {
	return strength;
}
int Being::GetStrengthMod() const {
	return strengthMod;
}
int Being::GetDexterity() const {
	return dexterity;
}
int Being::GetDexMod() const {
	return dexterityMod;
}
int Being::GetMaxHealth() const {
	return maxHealth;
}
int Being::GetCurrentHealth() const {
	return currentHealth;
}
int Being::GetMaxMana() const {
	return maxMana;
}
int Being::GetCurrentMana() const {
	return currentMana;
}
int Being::GetArmorClass() const {
	return armorClass;
}
std::string Being::GetName() const {
	return name;
}

std::string Being::GetDesc() const {
	std::string f = ("Current Health: " + std::to_string(GetCurrentHealth())
			+ ", Current Mana:" + std::to_string(GetCurrentMana()));
	return f;
}

void Being::SetModifiers() {
	intelligenceMod = SetMod(GetIntelligence());
	strengthMod = SetMod(GetStrength());
	dexterityMod = SetMod(GetDexterity());
	maxHealth = SetHealth();
	maxMana = SetMana();
}
int Being::SetMod(int stat) const {
	int mod;
	switch (stat) {
	case 1:
		mod = -5;
		break;
	case 2:
	case 3:
		mod = -4;
		break;
	case 4:
	case 5:
		mod = -3;
		break;
	case 6:
	case 7:
		mod = -2;
		break;
	case 8:
	case 9:
		mod = -1;
		break;
	case 10:
	case 11:
		mod = 0;
		break;
	case 12:
	case 13:
		mod = 1;
		break;
	case 14:
	case 15:
		mod = 2;
		break;
	case 16:
	case 17:
		mod = 3;
		break;
	case 18:
	case 19:
		mod = 4;
		break;
	case 20:
	case 21:
		mod = 5;
		break;
	case 22:
	case 23:
		mod = 6;
		break;
	case 24:
	case 25:
		mod = 7;
		break;
	case 26:
	case 27:
		mod = 8;
		break;
	case 28:
	case 29:
		mod = 9;
		break;
	case 30:
		mod = 10;
		break;
	default:
		break;
	}
	return mod;
}
int Being::SetMana() const {
	return (GetIntelMod() + 8);

}
int Being::SetHealth() const {
	return (GetStrengthMod() + 8);
}

