#include "Factory.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Factory::Factory()
 *
 * @brief	Default constructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Factory::Factory()
{
	std::cout << "Factory Created" << std::endl;
}

/**
 * @fn	DesignPatterns::Factory::~Factory()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Factory::~Factory()
{
	std::cout << "Factory Destroyed" << std::endl;
}

/**
 * @fn	DesignPatterns::Shape* DesignPatterns::Factory::Create(DesignPatterns::ShapeType type)
 *
 * @brief	Creates a new DesignPatterns::Shape*
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @param 	type	The type.
 *
 * @returns	Null if it fails, else a pointer to a DesignPatterns::Shape.
 */

DesignPatterns::Shape* DesignPatterns::Factory::Create(DesignPatterns::ShapeType type)
{
	switch (type)
	{
	case CIRCLE:
		return new Circle;
		break;
	case RECTANGLE:
		return new Rectangle;
		break;
	default:
		break;
	}
	return nullptr;
}