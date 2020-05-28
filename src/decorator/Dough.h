#ifndef DOUGH_H
#define DOUGH_H

#include "AbstractIngredient.h"

namespace DesignPatterns
{
	/**
	 * @class	Dough
	 *
	 * @brief	A dough.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class Dough : public AbstractIngredient
	{
	public:

		/**
		 * @fn	Dough::Dough();
		 *
		 * @brief	Default constructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		Dough();

		/**
		 * @fn	virtual Dough::~Dough();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		virtual ~Dough();

		/**
		 * @fn	double Dough::Price() const override;
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

#endif // !DOUGH_H