/*
 * Cat.h
 *
 *  Created on: Mar 31, 2018
 *      Author: David
 */

#ifndef CAT_H_
#define CAT_H_

//#pragma once
#include "Animal.h"
class Cat :
	public Animal
{
public:
	Cat();
	virtual ~Cat();
	void speak();
	void showHappiness();
};

#endif /* CAT_H_ */
