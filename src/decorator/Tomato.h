#ifndef TOMATO_H
#define TOMATO_H

#include "Ingredient.h"

namespace DesignPatterns
{
	/**
	 * @class	Tomato
	 *
	 * @brief	A tomato.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class Tomato : public Ingredient
	{
	public:

		/**
		 * @fn	Tomato::Tomato(AbstractIngredient* ingredient);
		 *
		 * @brief	Constructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 *
		 * @param [in,out]	ingredient	If non-null, the ingredient.
		 */

		Tomato(AbstractIngredient* ingredient);

		/**
		 * @fn	virtual Tomato::~Tomato();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		virtual  ~Tomato();

		/**
		 * @fn	double Tomato::Price() const override;
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

#endif // !TOMATO_H