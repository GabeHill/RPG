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
	void changeIntelligence(int changeBy);
	void changeStrength(int changeBy);
	void changeDexterity(int changeBy);
	void changeHealth(int changeBy);
	void changeMana(int changeBy);
	void changeArmor(int changeBy);
	void setMaxHealth(int max, bool restoreAll);
	void setMaxMana(int max, bool restoreAll);

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

	std::string name;

	Being(int i, int s, int d, std::string n);
	Being(int i, int s, int d);
	Being(std::string n);

private:
	void Being::setModifiers();
	int Being::setMod(int stat) const;
	int setMana() const;
	int setHealth() const;
};

#endif /* HEADERS_BEING_H_ */
