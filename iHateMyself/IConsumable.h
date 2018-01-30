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

class IConsumable {
public:
	virtual void use(Being * & b) =0;

	virtual std::string getDesc() const=0;

	virtual ~IConsumable() {

	}
protected:
private:

};


#endif /* ICONSUMABLE_H_ */
