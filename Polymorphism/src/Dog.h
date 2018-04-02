/*
 * Dog.h
 *
 *  Created on: Mar 31, 2018
 *      Author: David
 */

#ifndef DOG_H_
#define DOG_H_

//#pragma once
#include "Animal.h"
class Dog :
	public Animal
{
public:
	Dog();
	virtual ~Dog();
	void speak();
	void showHappiness();
};

#endif /* DOG_H_ */
