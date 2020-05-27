#include <iostream>
#include <vector>
#include "Singleton.h"

/** @brief	The printer mutex */
std::mutex printerMutex;

/**
 * @fn	void PrintSingletonObjectThreadId(int order)
 *
 * @brief	Print singleton object thread id
 *
 * @author	hamuryen
 * @date	27.05.2020
 *
 * @param 	order	The thread order.
 */

void PrintSingletonObjectThreadId(int order)
{
	auto id = DesignPatterns::Singleton::GetInstance()->GetThreadID();
	{
		std::lock_guard<std::mutex> lg(printerMutex);
		std::cout << "Thread Order:\t" << order << "\t\tThread ID:\t" << id << std::endl;
	}
}

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
	std::vector<std::thread> threads;
	for (int i = 0; i < 100; i++)
	{
		threads.push_back(std::thread(std::thread(PrintSingletonObjectThreadId, i)));
	}
	for (std::thread& t : threads) {
		if (t.joinable())
			t.join();
	}
	return 0;
}