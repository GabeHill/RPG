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

	void changeIntelligence(int changeBy)=0;
	void changeStrength(int changeBy)=0;
	void changeDexterity(int changeBy)=0;
	void changeHealth(int changeBy)=0;
	void changeMana(int changeBy)=0;
	void changeArmor(int changeBy)=0;
	void setMaxHealth(int max)=0;
	void setMaxMana(int max)=0;

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
	void setModifiers() {
		intelligenceMod = setMod(getIntelligence());
		strengthMod = setMod(getStrength());
		dexterityMod = setMod(getDexterity());
	}
	int setMod(int stat) {
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
			mod = 105;
			break;
		default:
			break;
		}
		return mod;
	}

};

#endif /* HEADERS_BEING_H_ */
