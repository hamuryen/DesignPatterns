#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

namespace DesignPatterns
{
	/**
	 * @class	Rectangle
	 *
	 * @brief	A rectangle.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class Rectangle : public Shape
	{
	public:

		/**
		 * @fn	Rectangle::Rectangle();
		 *
		 * @brief	Default constructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		Rectangle();

		/**
		 * @fn	Rectangle::~Rectangle();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		~Rectangle();

		/**
		 * @fn	void Rectangle::Draw() override;
		 *
		 * @brief	Draws this object
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		void Draw() override;
	};
};

#endif // !RECTANGLE_H