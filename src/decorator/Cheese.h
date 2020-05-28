#ifndef CHEESE_H
#define CHEESE_H

#include "Ingredient.h"

namespace DesignPatterns
{
	/**
	 * @class	Cheese
	 *
	 * @brief	A cheese.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class Cheese : public Ingredient
	{
	public:

		/**
		 * @fn	Cheese::Cheese(AbstractIngredient* ingredient);
		 *
		 * @brief	Constructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 *
		 * @param [in,out]	ingredient	If non-null, the ingredient.
		 */

		Cheese(AbstractIngredient* ingredient);

		/**
		 * @fn	virtual Cheese::~Cheese();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		virtual  ~Cheese();

		/**
		 * @fn	double Cheese::Price() const override;
		 *
		 * @brief	Gets the price
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 *
		 * @returns	A double.
		 */

		double Price() const override;
	};
};

#endif // !CHEESE_H