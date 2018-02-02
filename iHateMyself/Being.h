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

	void ChangeIntelligence(int changeBy);
	void ChangeStrength(int changeBy);
	void ChangeDexterity(int changeBy);
	void ChangeHealth(int changeBy);
	void ChangeMana(int changeBy);
	void ChangeArmor(int changeBy);
	void SetMaxHealth(int max, bool restoreAll);
	void SetMaxMana(int max, bool restoreAll);

	int GetIntelligence() const;
	int GetIntelMod() const;
	int GetStrength() const;
	int GetStrengthMod() const;
	int GetDexterity() const;
	int GetDexMod() const;
	int GetMaxHealth() const;
	int GetCurrentHealth() const;
	int GetMaxMana() const;
	int GetCurrentMana() const;
	int GetArmorClass() const;
	std::string GetName() const;

	std::string GetDesc() const;

protected:
	int intelligence = 0, intelligenceMod = 0, strength = 0, strengthMod = 0,
			dexterity = 0, dexterityMod = 0, maxHealth = 0, currentHealth = 0,
			maxMana = 0, currentMana = 0, armorClass = 0;

	Being(int i, int s, int d, std::string n);
	Being(int i, int s, int d);
	Being(std::string n);

private:
private:
	std::string name;

	void SetModifiers();
	int SetMod(int stat) const;
	int SetMana() const;
	int SetHealth() const;
};

#endif /* HEADERS_BEING_H_ */
