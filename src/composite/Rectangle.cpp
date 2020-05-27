#include "Rectangle.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Rectangle::Rectangle()
 *
 * @brief	Default constructor
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

DesignPatterns::Rectangle::Rectangle()
{
	std::cout << "Created Rectangle" << std::endl;
}

/**
 * @fn	DesignPatterns::Rectangle::~Rectangle()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

DesignPatterns::Rectangle::~Rectangle()
{
	std::cout << "Destroyed Rectangle" << std::endl;
}

/**
 * @fn	void DesignPatterns::Rectangle::DrawShape()
 *
 * @brief	Draw shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

void DesignPatterns::Rectangle::DrawShape()
{
	std::cout << "Rectangle Drawn" << std::endl;
}

/**
 * @fn	void DesignPatterns::Rectangle::ResizeShape()
 *
 * @brief	Resize shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

void DesignPatterns::Rectangle::ResizeShape()
{
	std::cout << "Rectangle Resized" << std::endl;
}

/**
 * @fn	void DesignPatterns::Rectangle::AddShape(Shape* shape)
 *
 * @brief	Adds a shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 *
 * @exception	std::exception	Thrown when an exception error condition occurs.
 *
 * @param [in,out]	shape	If non-null, the shape.
 */

void DesignPatterns::Rectangle::AddShape(Shape* shape)
{
	throw std::exception("A sub shape cannot be added to a rectangle");
}

/**
 * @fn	void DesignPatterns::Rectangle::RemoveShape(Shape* shape)
 *
 * @brief	Removes the shape described by shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 *
 * @exception	std::exception	Thrown when an exception error condition occurs.
 *
 * @param [in,out]	shape	If non-null, the shape.
 */

void DesignPatterns::Rectangle::RemoveShape(Shape* shape)
{
	throw std::exception("A sub shape cannot be remove from rectangle");
}