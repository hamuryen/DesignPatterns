#include <iostream>
#include "Dough.h"
#include "Tomato.h"
#include "Cheese.h"
#include "Basil.h"

using namespace DesignPatterns;

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
	Ingredient* pizza = new Basil(new Cheese(new Tomato(new Dough)));
	std::cout << std::endl << "Pizza price: " << pizza->Price() << std::endl << std::endl;
	delete pizza;
	return 0;
}