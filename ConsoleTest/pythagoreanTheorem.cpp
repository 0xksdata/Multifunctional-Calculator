#include "pch.h"
#include "pythagoreanTheorem.h"
#include "ConsoleTest.h"

int pythagoreanTheorem()
{
	float a, b, c, a_squared, b_squared, c_squared;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// pick the color attribute (hConsole, [change me]) you want
	SetConsoleTextAttribute(hConsole, 2);
	std::string title = "Pythagorean Theroem Calculator:\n\n";
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
    std::cout << "Enter variable a: ";
	std::cin >> a;
	std::cout << "Enter variable b: ";
	std::cin >> b;
	std::cout << "Enter variable c: ";
	std::cin >> c;
	std::cout << "\n";
	SetConsoleTextAttribute(hConsole, 3);
	std::cout << "a = " << a << " b = " << b << " c = " << c << "\n\n";
	SetConsoleTextAttribute(hConsole, 6);
	if (a == 0)
	{
		a_squared = (c * c) - (b * b);
		std::cout << "Variable a is equal to: ";
		SetConsoleTextAttribute(hConsole, 3);
		std::cout << sqrt(a_squared) << "\n";
	}
	if (b == 0)
	{
		b_squared = (c * c) - (a * a);
		std::cout << "Variable b is equal to: ";
		SetConsoleTextAttribute(hConsole, 3);
		std::cout << sqrt(b_squared) << "\n";
	}
	if (c == 0)
	{
		c_squared = (a * a) + (b * b);
		std::cout << "Variable c is equal to: ";
		SetConsoleTextAttribute(hConsole, 3);
		std::cout << sqrt(c_squared) << "\n";
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