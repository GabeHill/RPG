/*
 * HealthPot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_CONSUMABLES_HEALTHPOT_H_
#define HEADERS_CONSUMABLES_HEALTHPOT_H_

#include "../interfaces/IUsable.h"
#include "../loot/Loot.h"

class HealthPot: public IUsable, Loot {

public:

	HealthPot();

	void use(Being b);
	std::string getDesc() const;

protected:
private:
	int healAmt;

};

#endif /* HEADERS_CONSUMABLES_HEALTHPOT_H_ */
