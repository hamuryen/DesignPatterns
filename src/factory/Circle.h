#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

namespace DesignPatterns
{
	/**
	 * @class	Circle
	 *
	 * @brief	A circle.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class Circle : public Shape
	{
	public:

		/**
		 * @fn	Circle::Circle();
		 *
		 * @brief	Default constructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		Circle();

		/**
		 * @fn	Circle::~Circle();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		~Circle();

		/**
		 * @fn	void Circle::Draw() override;
		 *
		 * @brief	Draws this object
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		void Draw() override;
	};
};

#endif // !CIRCLE_H