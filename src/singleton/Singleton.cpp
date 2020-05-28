#include "Singleton.h"
#include <iostream>

/** @brief	The design patterns singleton instance */
DesignPatterns::Singleton* DesignPatterns::Singleton::m_Instance = nullptr;

/** @brief	The design patterns singleton m instance mutex */
std::mutex DesignPatterns::Singleton::m_InstanceMutex;

/**
 * @fn	DesignPatterns::Singleton::Singleton()
 *
 * @brief	Default constructor
 *
 * @author	hamuryen
 * @date	27.05.2020
 */

DesignPatterns::Singleton::Singleton()
{
	std::cout << "Singleton object created!\n";
}

/**
 * @fn	DesignPatterns::Singleton* DesignPatterns::Singleton::GetInstance()
 *
 * @brief	Gets the instance
 *
 * @author	hamuryen
 * @date	27.05.2020
 *
 * @returns	Null if it fails, else the instance.
 */

DesignPatterns::Singleton* DesignPatterns::Singleton::GetInstance()
{
	//Provides security for multi-thread use to keep object as singleton. So this part is important and necessary. 	
	if (m_Instance == nullptr)
	{
		//If you test below line by making a comment line, you will see that object can create more than once in the the console like "Singleton object created!".
		std::lock_guard<std::mutex> lg(m_InstanceMutex);
		if (m_Instance == nullptr)
			m_Instance = new Singleton();
	}
	return m_Instance;
}

/**
 * @fn	std::thread::id DesignPatterns::Singleton::GetThreadID()
 *
 * @brief	Gets thread id
 *
 * @author	hamuryen
 * @date	27.05.2020
 *
 * @returns	The thread id.
 */

std::thread::id DesignPatterns::Singleton::GetThreadID()
{
	return std::this_thread::get_id();
}