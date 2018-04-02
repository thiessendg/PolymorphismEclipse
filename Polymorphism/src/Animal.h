/*
 * Animal.h
 *
 *  Created on: Mar 31, 2018
 *      Author: David
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal
{
public:
	Animal();
	virtual ~Animal();
	virtual void speak() = 0;
	virtual void showHappiness() = 0;
};

#endif /* ANIMAL_H_ */
