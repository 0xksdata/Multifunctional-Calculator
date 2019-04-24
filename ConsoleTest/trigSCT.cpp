#include "pch.h"
#include "trigSCT.h"
#include "ConsoleTest.h"

int trigSCT()
{
	float adjacent, opposite, hypotenuse;
	float sin_solve, cos_solve, tan_solve;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// pick the color attribute (hConsole, [change me]) you want
	SetConsoleTextAttribute(hConsole, 2);
	std::string title = "SOH CAH TOA Calculator:\n";
	for (const auto c1 : title) {
		std::cout << c1 << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	SetConsoleTextAttribute(hConsole, 3);
	std::string title1 = "For the unkown variable, enter 0.\n\n";
	for (const auto c2 : title1) {
		std::cout << c2 << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	SetConsoleTextAttribute(hConsole, 6);
    std::cout << "Enter the adjacent: ";
	std::cin >> adjacent;
	std::cout << "Enter the opposite: ";
	std::cin >> opposite;
	std::cout << "Enter the hypotenuse: \n\n";
	std::cin >> hypotenuse;
	if (adjacent == 0)
	{
		sin_solve = (opposite / hypotenuse);
		std::cout << "sin = ";
		SetConsoleTextAttribute(hConsole, 3);
		std::cout << sin_solve << "\n";
	}
	if (opposite == 0)
	{
		cos_solve = (adjacent / hypotenuse);
		std::cout << "cos = ";
		SetConsoleTextAttribute(hConsole, 3);
		std::cout << cos_solve << "\n";
	}
	if (hypotenuse == 0)
	{
		tan_solve = (opposite / adjacent);
		std::cout << "tan = ";
		SetConsoleTextAttribute(hConsole, 3);
		std::cout << tan_solve << "\n";
	}
	std::string response;
	SetConsoleTextAttribute(hConsole, 6);
	std::cout << "Would you like to use this again? \n";
	std::cout << "(Y)es or (N)o: ";
	std::cin >> response;
	// Comment2:start change below if you can figure out the OR usage of strings
	if (response == "Y")
	{
		std::cout << "\n";
		main();
	}
	else
	{
		if (response == "y")
		{
			std::cout << "\n";
			main();
		}
		if (response == "N")
		{
			exit(0);
		}
		else
		{
			if (response == "n")
			{
				exit(0);
			}
		}
	}
	// Coment2:end

}