#ifndef GROUP_H
#define GROUP_H

#include "Shape.h"

namespace DesignPatterns
{
	/**
	 * @class	Factory
	 *
	 * @brief	A factory.
	 *
	 * @author	hamuryen
	 * @date	28.05.2020
	 */

	class Factory
	{
	public:

		/**
		 * @fn	Factory::Factory();
		 *
		 * @brief	Default constructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		Factory();

		/**
		 * @fn	Factory::~Factory();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 */

		~Factory();

		/**
		 * @fn	Shape* Factory::Create(ShapeType type);
		 *
		 * @brief	Creates a new Shape*
		 *
		 * @author	hamuryen
		 * @date	28.05.2020
		 *
		 * @param 	type	The type.
		 *
		 * @returns	Null if it fails, else a pointer to a Shape.
		 */

		Shape* Create(ShapeType type);
	};
};

#endif // !GROUP_H