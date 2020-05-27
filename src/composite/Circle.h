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
	 * @date	27.05.2020
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
		 * @date	27.05.2020
		 */

		Circle();

		/**
		 * @fn	Circle::~Circle();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		~Circle();

		/**
		 * @fn	void Circle::DrawShape() override;
		 *
		 * @brief	Draw shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		void DrawShape() override;

		/**
		 * @fn	void Circle::ResizeShape() override;
		 *
		 * @brief	Resize shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		void ResizeShape() override;

		/**
		 * @fn	void Circle::AddShape(Shape* shape) override;
		 *
		 * @brief	Adds a shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @param [in,out]	shape	If non-null, the shape.
		 */

		void AddShape(Shape* shape) override;

		/**
		 * @fn	void Circle::RemoveShape(Shape* shape) override;
		 *
		 * @brief	Removes the shape described by shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @param [in,out]	shape	If non-null, the shape.
		 */

		void RemoveShape(Shape* shape) override;
	};
};

#endif // !CIRCLE_H