#ifndef BASIL_H
#define BASIL_H

#include "Ingredient.h"

namespace DesignPatterns
{
	/**
	 * @class	Basil
	 *
	 * @brief	A basil.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class Basil : public Ingredient
	{
	public:

		/**
		 * @fn	Basil::Basil(AbstractIngredient* ingredient);
		 *
		 * @brief	Constructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 *
		 * @param [in,out]	ingredient	If non-null, the ingredient.
		 */

		Basil(AbstractIngredient* ingredient);

		/**
		 * @fn	virtual Basil::~Basil();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		virtual  ~Basil();

		/**
		 * @fn	double Basil::Price() const override;
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

#endif // !BASIL_H