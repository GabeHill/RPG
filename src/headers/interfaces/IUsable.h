/*
 * IUsable.h
 *
 *  Created on: Jan 25, 2018
 *      Author: owner
 */

#ifndef HEADERS_INTERFACES_IUSABLE_H_
#define HEADERS_INTERFACES_IUSABLE_H_

#include <string>

/**
 * class not to be instantiated. used for interface purposes.
 */
class IUsable {
public:
	virtual int use()=0;
	virtual std::string getDesc() const=0;

	virtual ~IUsable();

protected:
private:

};


#endif /* HEADERS_INTERFACES_IUSABLE_H_ */
