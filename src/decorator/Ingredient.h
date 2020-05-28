#ifndef INGREDIENT_H
#define INGREDIENT_H

#include "AbstractIngredient.h"

namespace DesignPatterns
{
	/**
	 * @class	Ingredient
	 *
	 * @brief	A ingredient.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class Ingredient : public AbstractIngredient
	{
	public:

		/**
		 * @fn	Ingredient::Ingredient(AbstractIngredient* ingredient);
		 *
		 * @brief	Constructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 *
		 * @param [in,out]	ingredient	If non-null, the ingredient.
		 */

		Ingredient(AbstractIngredient* ingredient);

		/**
		 * @fn	virtual Ingredient::~Ingredient();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		virtual ~Ingredient();

		/**
		 * @fn	double Ingredient::Price() const override;
		 *
		 * @brief	Gets the price
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 *
		 * @returns	A double.
		 */

		double Price() const override;

	private:
		AbstractIngredient* m_Ingredient;
	};
};

#endif // !INGREDIENT_H