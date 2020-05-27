#include <iostream>

#include "Group.h"
#include "Circle.h"
#include "Rectangle.h"

/**
 * @fn	int main(int argc, char** argv)
 *
 * @brief	Main entry-point for this application
 *
 * @author	hamuryen
 * @date	27.05.2020
 *
 * @param 	argc	The number of command-line arguments provided.
 * @param 	argv	An array of command-line argument strings.
 *
 * @returns	Exit-code for the process - 0 for success, else an error code.
 */

int main(int argc, char** argv)
{
	std::cout << "*******************Rectangle 1*******************" << std::endl;
	DesignPatterns::Shape* r1 = new DesignPatterns::Rectangle;
	r1->DrawShape();
	r1->ResizeShape();

	std::cout << "\n*******************Circle*******************" << std::endl;
	DesignPatterns::Shape* c = new DesignPatterns::Circle;
	c->DrawShape();
	c->ResizeShape();

	std::cout << "\n*******************Group*******************" << std::endl;
	DesignPatterns::Shape* g = new DesignPatterns::Group;
	g->AddShape(r1);
	g->AddShape(c);
	g->DrawShape();
	g->ResizeShape();

	std::cout << "\n*******************Rectangle 2*******************" << std::endl;
	DesignPatterns::Shape* r2 = new DesignPatterns::Rectangle;
	r2->DrawShape();
	r2->ResizeShape();

	std::cout << "\n*******************Group after add R2*******************" << std::endl;
	g->AddShape(r2);
	g->DrawShape();
	g->ResizeShape();

	std::cout << "\n*******************Group after remove R1*******************" << std::endl;
	g->RemoveShape(r1);
	g->RemoveShape(r1);
	g->DrawShape();
	g->ResizeShape();

	std::cout << "\n*******************Group after remove Circle*******************" << std::endl;
	g->RemoveShape(c);
	g->DrawShape();
	g->ResizeShape();

	g->RemoveShape(r2);
	std::cout << "\n*******************Delete objects******************" << std::endl;
	delete r1;
	delete c;
	delete r2;
	delete g;

	return 0;
}