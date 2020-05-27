#ifndef GROUP_H
#define GROUP_H

#include <vector>
#include "Shape.h"

namespace DesignPatterns
{
	/**
	 * @class	Group
	 *
	 * @brief	A group.
	 *
	 * @author	hamuryen
	 * @date	27.05.2020
	 */

	class Group : public Shape
	{
	public:

		/**
		 * @fn	Group::Group();
		 *
		 * @brief	Default constructor
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		Group();

		/**
		 * @fn	Group::~Group();
		 *
		 * @brief	Destructor
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		~Group();

		/**
		 * @fn	void Group::DrawShape() override;
		 *
		 * @brief	Draw shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		void DrawShape() override;

		/**
		 * @fn	void Group::ResizeShape() override;
		 *
		 * @brief	Resize shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		void ResizeShape() override;

		/**
		 * @fn	void Group::AddShape(Shape* shape) override;
		 *
		 * @brief	Adds a shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @param [in,out]	shape	If non-null, the shape.
		 */

		void AddShape(Shape* shape) override;

		/**
		 * @fn	void Group::RemoveShape(Shape* shape) override;
		 *
		 * @brief	Removes the shape described by shape
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @param [in,out]	shape	If non-null, the shape.
		 */

		void RemoveShape(Shape* shape) override;

	private:
		std::vector<Shape*> m_Shapes;
	};
};

#endif // !GROUP_H