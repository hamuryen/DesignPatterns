#include "Rectangle.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Rectangle::Rectangle()
 *
 * @brief	Default constructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Rectangle::Rectangle()
{
	std::cout << "Rectangle Created" << std::endl;
}

/**
 * @fn	DesignPatterns::Rectangle::~Rectangle()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Rectangle::~Rectangle()
{
	std::cout << "Rectangle Destroyed" << std::endl;
}

/**
 * @fn	void DesignPatterns::Rectangle::Draw()
 *
 * @brief	Draws this object
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

void DesignPatterns::Rectangle::Draw()
{
	std::cout << "Rectangle Draw" << std::endl;
}