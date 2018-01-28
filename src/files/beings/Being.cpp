/*
 * Being.cpp
 *
 *  Created on: Jan 23, 2018
 *      Author: owner
 */

#include "../headers/livingThings/Being.h"

Being::Being(std::string n) :
		name(n) {
	changeStrength(1);
	changeDexterity(1);
	changeIntelligence(1);
	setModifiers();
}
Being::Being(int i, int s, int d, std::string n) :
		name(n) {
	changeStrength(s);
	changeDexterity(d);
	changeIntelligence(i);
	setModifiers();
}
Being::Being(int i, int s, int d) {
	name = "None";
	changeStrength(s);
	changeDexterity(d);
	changeIntelligence(i);
	setModifiers();
}

void Being::changeIntelligence(int changeBy) {
	intelligence += changeBy;
	intelligence = intelligence > 30 ? 30 : intelligence;
	intelligence = intelligence < 0 ? 0 : intelligence;
	currentHealth = intelligence > 0 ? currentHealth : 0;
}
void Being::changeStrength(int changeBy) {
	strength += changeBy;
	strength = strength > 30 ? 30 : strength;
	strength = strength < 0 ? 0 : strength;
	currentHealth = strength > 0 ? currentHealth : 0;
}
void Being::changeDexterity(int changeBy) {
	dexterity += changeBy;
	dexterity = dexterity > 30 ? 30 : dexterity;
	dexterity = dexterity < 0 ? 0 : dexterity;
	currentHealth = dexterity > 0 ? currentHealth : 0;
}

void Being::changeHealth(int changeBy) {
	currentHealth += changeBy;
	currentHealth = currentHealth > maxHealth ? maxHealth : currentHealth;
	currentHealth = currentHealth < 0 ? 0 : currentHealth;
}
void Being::changeMana(int changeBy) {
	currentMana += changeBy;
	currentMana = currentMana > maxMana ? maxMana : currentMana;
	currentMana = currentMana < 0 ? 0 : currentMana;
}
void Being::changeArmor(int changeBy) {
	armorClass += changeBy;
	armorClass = armorClass > 20 ? 20 : armorClass;
	armorClass = armorClass < 0 ? 0 : armorClass;
}
void Being::setMaxHealth(int max, bool restoreAll) {
	maxHealth = max;
	maxHealth = maxHealth < 0 ? 0 : maxHealth;
	currentHealth = restoreAll ? maxHealth : currentHealth;
}
void Being::setMaxMana(int max, bool restoreAll) {
	maxMana = max;
	maxMana = maxMana < 0 ? 0 : maxMana;
	currentMana = restoreAll ? maxMana : currentMana;
}

int Being::getIntelligence() const {
	return intelligence;
}
int Being::getIntelMod() const {
	return intelligenceMod;
}
int Being::getStrength() const {
	return strength;
}
int Being::getStrengthMod() const {
	return strengthMod;
}
int Being::getDexterity() const {
	return dexterity;
}
int Being::getDexMod() const {
	return dexterityMod;
}
int Being::getMaxHealth() const {
	return maxHealth;
}
int Being::getCurrentHealth() const {
	return currentHealth;
}
int Being::getMaxMana() const {
	return maxMana;
}
int Being::getCurrentMana() const {
	return currentMana;
}
int Being::getArmorClass() const {
	return armorClass;
}

std::string Being::toString() const {
	return "Current Health: " + getCurrentHealth() + ", Current Mana:"
			+ getCurrentMana();
}

void Being::setModifiers() {
	intelligenceMod = setMod(getIntelligence());
	strengthMod = setMod(getStrength());
	dexterityMod = setMod(getDexterity());
	maxHealth = setHealth();
	maxMana = setMana();
}
int Being::setMod(int stat) const {
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
int Being::setMana() const {
	return (getIntelMod() + 8);

}
int Being::setHealth() const {
	return (getStrengthMod() + 8);
}

