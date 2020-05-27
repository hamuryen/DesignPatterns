#ifndef SHAPE_H
#define SHAPE_H

namespace DesignPatterns
{
	/**
	 * @class	Shape
	 *
	 * @brief	A shape.
	 *
	 * @author	hamuryen
	 * @date	27.05.2020
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
		 * @date	27.05.2020
		 */

		virtual ~Shape() = default;

		/**
		 * @fn	virtual void Shape::DrawShape() = 0;
		 *
		 * @brief	Draw shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		virtual void DrawShape() = 0;

		/**
		 * @fn	virtual void Shape::ResizeShape() = 0;
		 *
		 * @brief	Resize shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		virtual void ResizeShape() = 0;

		/**
		 * @fn	virtual void Shape::AddShape(Shape* shape) = 0;
		 *
		 * @brief	Adds a shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @param [in,out]	shape	If non-null, the shape.
		 */

		virtual void AddShape(Shape* shape) = 0;

		/**
		 * @fn	virtual void Shape::RemoveShape(Shape* shape) = 0;
		 *
		 * @brief	Removes the shape described by shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @param [in,out]	shape	If non-null, the shape.
		 */

		virtual void RemoveShape(Shape* shape) = 0;
	};
};

#endif // !SHAPE_H