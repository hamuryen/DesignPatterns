#include "Tomato.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Tomato::Tomato(AbstractIngredient* ingredient)
 *
 * @brief	Constructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @param [in,out]	ingredient	If non-null, the ingredient.
 */

DesignPatterns::Tomato::Tomato(AbstractIngredient* ingredient)
	:Ingredient(ingredient)
{
	std::cout << "Create Tomato\n";
}

/**
 * @fn	DesignPatterns::Tomato::~Tomato()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Tomato::~Tomato()
{
	std::cout << "Delete Tomato\n";
}

/**
 * @fn	double DesignPatterns::Tomato::Price() const
 *
 * @brief	Gets the price
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @returns	A double.
 */

double DesignPatterns::Tomato::Price() const
{
	return 1.5 + Ingredient::Price();
}