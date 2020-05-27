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
	 * @date	27.05.2020
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
		 * @date	27.05.2020
		 */

		Rectangle();

		/**
		 * @fn	Rectangle::~Rectangle();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		~Rectangle();

		/**
		 * @fn	void Rectangle::DrawShape() override;
		 *
		 * @brief	Draw shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		void DrawShape() override;

		/**
		 * @fn	void Rectangle::ResizeShape() override;
		 *
		 * @brief	Resize shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		void ResizeShape() override;

		/**
		 * @fn	void Rectangle::AddShape(Shape* shape) override;
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
		 * @fn	void Rectangle::RemoveShape(Shape* shape) override;
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

#endif // !RECTANGLE_H