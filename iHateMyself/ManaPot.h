/*
 * HealthPot.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEALTHPOT_H_
#define HEALTHPOT_H_

#include "../iHateMyself/Being.h"
#include "../iHateMyself/Loot.h"
#include "IConsumable.h"

class ManaPot: public Loot, public IConsumable {

public:

	ManaPot();

	void Use(Being* & b) override;
	std::string GetDesc() const;

protected:
private:
	int manaRestore;

};

#endif /* HEADERS_CONSUMABLES_HEALTHPOT_H_ */
