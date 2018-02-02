/*
 * Berry.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_CONSUMABLES_BERRY_H_
#define HEADERS_CONSUMABLES_BERRY_H_

#include "Being.h"
#include "../iHateMyself/Loot.h"
#include "IConsumable.h"


class Berry: public Loot, public IConsumable {
public:
	enum BerryType {
		NIGHTSHADE, BLUEBERRY, RASBERRY, JUNIPER, YEW, CRABAPPLE
	};

	std::array<std::string, 6> berryNames = { "nightshade", "blueberry",
			"rasberry", "juniper", "yew", "crabapple" };

	Berry(BerryType t);

	void Use(Being*& b) override;
	std::string GetType() const;
	std::string GetDesc() const;

protected:
private:
	BerryType type;

};

#endif /* HEADERS_CONSUMABLES_BERRY_H_ */
