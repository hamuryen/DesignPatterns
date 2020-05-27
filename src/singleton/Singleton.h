#ifndef SINGLETON_H
#define SINGLETON_H

#include <mutex>

namespace DesignPatterns
{
	/**
	 * @class	Singleton
	 *
	 * @brief	A singleton class in c++ for  understand design patterns.
	 *
	 * @author	hamuryen
	 * @date	27.05.2020
	 */

	class Singleton
	{
	public:
		/**
		 * @fn	Singleton::Singleton(Singleton& other) = delete;
		 *
		 * @brief	Copy constructor deleted because singleton class can't be cloneable
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @param [in,out]	other	The other.
		 */

		Singleton(Singleton& other) = delete;

		/**
		 * @fn	void Singleton::operator=(const Singleton&) = delete;
		 *
		 * @brief	Assignment operator deleted because singleton class can't be assignable.
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @param 	parameter The original object.
		 */

		void operator=(const Singleton&) = delete;

		/**
		 * @fn	static Singleton* Singleton::GetInstance();
		 *
		 * @brief	Gets the instance
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @returns	The instance.
		 */

		static Singleton* GetInstance();

		/**
		 * @fn	std::thread::id Singleton::GetThreadID();
		 *
		 * @brief	Gets the current thread id
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 *
		 * @returns	The thread id.
		 */

		std::thread::id GetThreadID();

	private:

		/**
		 * @fn	Singleton::Singleton();
		 *
		 * @brief	Default constructor
		 *
		 * @author	hamuryen
		 * @date	27.05.2020
		 */

		Singleton();


		/** @brief	The instance */
		static Singleton* m_Instance;

		/** @brief	The instance mutex for multutreading */
		static std::mutex m_InstanceMutex;
	};
};

#endif // !SINGLETON_H