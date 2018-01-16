/*
 * Being.h
 *
 *  Created on: Jan 16, 2018
 *      Author: owner
 */

#ifndef HEADERS_BEING_H_
#define HEADERS_BEING_H_

#include <string>

class Being {

public:
	Being(int i, int s, int d, std::string n);
	Being(std::string n);

	void changeIntelligence(int change);
	void changeStrength(int change);
	void changeDexterity(int change);
	void changeHealth(int change);
	void changeMana(int change);
	void changeArmor(int change);

	int getIntelligence() const;
	int getIntelMod() const;
	int getStrength() const;
	int getStrengthMod() const;
	int getDexterity() const;
	int getDexMod() const;
	int getMaxHealth() const;
	int getCurrentHealth() const;
	int getMaxMana() const;
	int getCurrentMana() const;
	int getArmorClass() const;

protected:

	int intelligence, intelligenceMod, strength, strengthMod, dexterity,
			dexterityMod, maxHealth, currentHealth, maxMana, currentMana,
			armorClass;

private:





};

#endif /* HEADERS_BEING_H_ */
