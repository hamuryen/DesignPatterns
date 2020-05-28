#include "Ingredient.h"

/**
 * @fn	DesignPatterns::Ingredient::Ingredient(AbstractIngredient* ingredient)
 *
 * @brief	Constructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @param [in,out]	ingredient	If non-null, the ingredient.
 */

DesignPatterns::Ingredient::Ingredient(AbstractIngredient* ingredient)
	:m_Ingredient(ingredient)
{
}

/**
 * @fn	DesignPatterns::Ingredient::~Ingredient()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Ingredient::~Ingredient()
{
	delete m_Ingredient;
}

/**
 * @fn	double DesignPatterns::Ingredient::Price() const
 *
 * @brief	Gets the price
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @returns	A double.
 */

double DesignPatterns::Ingredient::Price() const
{
	return m_Ingredient->Price();
}