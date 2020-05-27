#include "Group.h"
#include <iostream>

/**
 * @fn	DesignPatterns::Group::Group()
 *
 * @brief	Default constructor
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

DesignPatterns::Group::Group()
{
	std::cout << "Created Group" << std::endl;
}

/**
 * @fn	DesignPatterns::Group::~Group()
 *
 * @brief	Destructor
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

DesignPatterns::Group::~Group()
{
	std::cout << "Destroyed Group" << std::endl;
}

/**
 * @fn	void DesignPatterns::Group::DrawShape()
 *
 * @brief	Draw shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

void DesignPatterns::Group::DrawShape()
{
	for (auto s : m_Shapes)
	{
		s->DrawShape();
	}
}

/**
 * @fn	void DesignPatterns::Group::ResizeShape()
 *
 * @brief	Resize shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

void DesignPatterns::Group::ResizeShape()
{
	for (auto& s : m_Shapes)
	{
		s->ResizeShape();
	}
}

/**
 * @fn	void DesignPatterns::Group::AddShape(Shape* shape)
 *
 * @brief	Adds a shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 *
 * @param [in,out]	shape	If non-null, the shape.
 */

void DesignPatterns::Group::AddShape(Shape* shape)
{
	m_Shapes.push_back(shape);
}

/**
 * @fn	void DesignPatterns::Group::RemoveShape(Shape* shape)
 *
 * @brief	Removes the shape described by shape
 *
 * @author	hamuryen
 * @date	27.05.2020
 *
 * @param [in,out]	shape	If non-null, the shape.
 */

void DesignPatterns::Group::RemoveShape(Shape* shape)
{
	m_Shapes.erase(std::remove(m_Shapes.begin(), m_Shapes.end(), shape), m_Shapes.end());
}