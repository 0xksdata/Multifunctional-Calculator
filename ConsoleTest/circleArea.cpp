#include "pch.h"
#include "circleArea.h"
#include "ConsoleTest.h"

int circleArea()
{
	float r;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// pick the color attribute (hConsole, [change me]) you want
	SetConsoleTextAttribute(hConsole, 2);
	std::string title = "Circle Area Calculator:\n\n";
	for (const auto c1 : title) {
		std::cout << c1 << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	SetConsoleTextAttribute(hConsole, 6);
    std::cout << "Enter variable r: ";
	std::cin >> r;
	std::cout << "A = ";
	SetConsoleTextAttribute(hConsole, 3);
	std::cout << ((r*r) * 3.1415);
	SetConsoleTextAttribute(hConsole, 6);
	std::cout << " units squared.\n";
	std::string responsecGroup;
	std::cout << "Would you like to use this again? \n";
	std::cout << "(Y)es or (N)o: ";
	std::cin >> responsecGroup;
	// Comment2:start change below if you can figure out the OR usage of strings
	if (responsecGroup == "Y")
	{
		std::cout << "\n";
		main();
	}
	else
	{
		if (responsecGroup == "y")
		{
			std::cout << "\n";
			main();
		}
		if (responsecGroup == "N")
		{
			exit(0);
		}
		else
		{
			if (responsecGroup == "n")
			{
				exit(0);
			}
		}
	}
	// Coment2:end
}