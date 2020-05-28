#include <iostream>
#include "Factory.h"
#include "Circle.h"
#include "Rectangle.h"

/**
 * @fn	int main(int argc, char** argv)
 *
 * @brief	Main entry-point for this application
 *
 * @author	hamuryen
 * @date	28.05.2020
 *
 * @param 	argc	The number of command-line arguments provided.
 * @param 	argv	An array of command-line argument strings.
 *
 * @returns	Exit-code for the process - 0 for success, else an error code.
 */

int main(int argc, char** argv)
{
	std::cout << "**********************Create Objects****************" << std::endl;
	DesignPatterns::Factory* factory = new DesignPatterns::Factory;
	DesignPatterns::Shape* circle = factory->Create(DesignPatterns::CIRCLE);
	DesignPatterns::Shape* rectangle = factory->Create(DesignPatterns::RECTANGLE);

	std::cout << std::endl << "**********************Draw Objects****************" << std::endl;
	circle->Draw();
	rectangle->Draw();

	std::cout << std::endl << "**********************Delete Objects****************" << std::endl;
	delete factory;
	delete circle;
	delete rectangle;

	return 0;
}