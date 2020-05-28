#include "Basil.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Basil::Basil(AbstractIngredient* ingredient)
 *
 * @brief	Constructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @param [in,out]	ingredient	If non-null, the ingredient.
 */

DesignPatterns::Basil::Basil(AbstractIngredient* ingredient)
	:Ingredient(ingredient)
{
	std::cout << "Create Basil\n";
}

/**
 * @fn	DesignPatterns::Basil::~Basil()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Basil::~Basil()
{
	std::cout << "Delete Basil\n";
}

/**
 * @fn	double DesignPatterns::Basil::Price() const
 *
 * @brief	Gets the price
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @returns	A double.
 */

double DesignPatterns::Basil::Price() const
{
	return 0.5 + Ingredient::Price();
}