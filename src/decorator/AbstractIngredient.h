#ifndef ABSTRACT_INGREDIENT_H
#define ABSTRACT_INGREDIENT_H

namespace DesignPatterns
{
	/**
	 * @class	AbstractIngredient
	 *
	 * @brief	An abstract ingredient.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class AbstractIngredient
	{
	public:

		/**
		 * @fn	virtual AbstractIngredient::~AbstractIngredient() = default;
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		virtual ~AbstractIngredient() = default;

		/**
		 * @fn	virtual double AbstractIngredient::Price() const = 0;
		 *
		 * @brief	Gets the price
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 *
		 * @returns	A double.
		 */

		virtual double Price() const = 0;
	};
};

#endif // !ABSTRACT_INGREDIENT_H