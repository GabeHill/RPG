/*
 * Berry.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_CONSUMABLES_BERRY_H_
#define HEADERS_CONSUMABLES_BERRY_H_

#include "../interfaces/IUsable.h"
#include "../loot/Loot.h"

class Berry: public Loot, IUsable {

	enum BerryType {
		NIGHTSHADE = "Nightshade",
		BLUEBERRY = "Blueberry",
		RASBERRY = "Rasberry",
		JUNIPER = "Juniper",
		YEW = "Yew",
		CRABAPPLE = "Crabapple"
	};

public:
	const BerryType type;

	Berry(BerryType t);

	void use(Being b);
	std::string getDesc() const;

protected:
private:

};

#endif /* HEADERS_CONSUMABLES_BERRY_H_ */
