/*
 * Consumable.h
 *
 *  Created on: Jan 29, 2018
 *      Author: owner
 */

#ifndef ICONSUMABLE_H_
#define ICONSUMABLE_H_
#include "Being.h"
#include "Loot.h"

class IConsumable: public Loot {
public:
	IConsumable() :
			Loot(CONSUMABLE, rand() % 24 + 1) {

	}
	void use(Being b) {

	}

protected:
private:

};


#endif /* ICONSUMABLE_H_ */
