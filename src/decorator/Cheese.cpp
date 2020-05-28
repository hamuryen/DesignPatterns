#include "Cheese.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Cheese::Cheese(AbstractIngredient* ingredient)
 *
 * @brief	Constructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @param [in,out]	ingredient	If non-null, the ingredient.
 */

DesignPatterns::Cheese::Cheese(AbstractIngredient* ingredient)
	:Ingredient(ingredient)
{
	std::cout << "Create Cheese\n";
}

/**
 * @fn	DesignPatterns::Cheese::~Cheese()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Cheese::~Cheese()
{
	std::cout << "Delete Cheese\n";
}

/**
 * @fn	double DesignPatterns::Cheese::Price() const
 *
 * @brief	Gets the price
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @returns	A double.
 */

double DesignPatterns::Cheese::Price() const
{
	return 2.0 + Ingredient::Price();
}