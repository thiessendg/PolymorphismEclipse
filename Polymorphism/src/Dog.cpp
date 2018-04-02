/*
 * Dog.cpp
 *
 *  Created on: Mar 31, 2018
 *      Author: David
 */


//#include "stdafx.h"
#include "Dog.h"
#include <iostream>


Dog::Dog()
{
}


Dog::~Dog()
{
}

void Dog::speak()
{
	std::cout << "Woof" << std::endl;
}

void Dog::showHappiness()
{
	std::cout << "wagging tail" << std::endl;
}

