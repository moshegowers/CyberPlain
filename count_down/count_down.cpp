#include <iostream>
#include <thread>
#include <chrono>
#include <stdlib.h>

using namespace std::chrono_literals;

int main()
{
	for (size_t i = 12; i > 0; i--)
	{
		system("cls");
		std::cout << "Time until takeoff: " << i << '\r';
		std::this_thread::sleep_for(1s);
	}

	system("cls");
	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << "Takeoff" << '\r' << std::endl;
		}
		else
		{
			system("cls");
		}
		std::this_thread::sleep_for(0.5s);
	}

	return 0;
}

