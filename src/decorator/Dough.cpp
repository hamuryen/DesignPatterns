#include "Dough.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Dough::Dough()
 *
 * @brief	Default constructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Dough::Dough()
{
	std::cout << "Create Dough\n";
}

/**
 * @fn	DesignPatterns::Dough::~Dough()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Dough::~Dough()
{
	std::cout << "Delete Dough\n";
}

/**
 * @fn	double DesignPatterns::Dough::Price() const
 *
 * @brief	Gets the price
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @returns	A double.
 */

double DesignPatterns::Dough::Price() const
{
	return 2.5;
}