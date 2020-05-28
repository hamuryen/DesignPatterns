#ifndef SHAPE_H
#define SHAPE_H

#include "ShapeType.h"

namespace DesignPatterns
{
	/**
	 * @class	Shape
	 *
	 * @brief	A shape.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class Shape
	{
	public:

		/**
		 * @fn	virtual Shape::~Shape() = default;
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		virtual ~Shape() = default;

		/**
		 * @fn	virtual void Shape::Draw() = 0;
		 *
		 * @brief	Draws this object
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		virtual void Draw() = 0;
	};
};

#endif // !SHAPE_H