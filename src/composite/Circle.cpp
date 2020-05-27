#include "Circle.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Circle::Circle()
 *
 * @brief	Default constructor
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

DesignPatterns::Circle::Circle()
{
	std::cout << "Created Circle" << std::endl;
}

/**
 * @fn	DesignPatterns::Circle::~Circle()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

DesignPatterns::Circle::~Circle()
{
	std::cout << "Destroyed Circle" << std::endl;
}

/**
 * @fn	void DesignPatterns::Circle::DrawShape()
 *
 * @brief	Draw shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

void DesignPatterns::Circle::DrawShape()
{
	std::cout << "Circle Drawn" << std::endl;
}

/**
 * @fn	void DesignPatterns::Circle::ResizeShape()
 *
 * @brief	Resize shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

void DesignPatterns::Circle::ResizeShape()
{
	std::cout << "Circle Resized" << std::endl;
}

/**
 * @fn	void DesignPatterns::Circle::AddShape(Shape* shape)
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

void DesignPatterns::Circle::AddShape(Shape* shape)
{
	throw std::exception("A sub shape cannot be added to a circle");
}

/**
 * @fn	void DesignPatterns::Circle::RemoveShape(Shape* shape)
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

void DesignPatterns::Circle::RemoveShape(Shape* shape)
{
	throw std::exception("A sub shape cannot be remove from circle");
}