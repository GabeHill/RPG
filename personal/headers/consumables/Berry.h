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

class Berry: public IUsable, Loot {

	enum BerryType {
		NIGHTSHADE, BLUEBERRY, RASBERRY, JUNIPER, YEW, CRABAPPLE
	};

public:
	Berry(BerryType t);

	int use();
	std::string getDesc() const;

protected:
private:
	const BerryType type;

};

#endif /* HEADERS_CONSUMABLES_BERRY_H_ */
