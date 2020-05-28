#include "Circle.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Circle::Circle()
 *
 * @brief	Default constructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Circle::Circle()
{
	std::cout << "Circle Created" << std::endl;
}

/**
 * @fn	DesignPatterns::Circle::~Circle()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

DesignPatterns::Circle::~Circle()
{
	std::cout << "Circle Destroyed" << std::endl;
}

/**
 * @fn	void DesignPatterns::Circle::Draw()
 *
 * @brief	Draws this object
 *
 * @author	hamuryen
 * @date	28.05.2020
 */

void DesignPatterns::Circle::Draw()
{
	std::cout << "Circle Draw" << std::endl;
}