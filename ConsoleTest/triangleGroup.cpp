#include "pch.h"
#include "triangleGroup.h"
#include "pythagoreanTheorem.h"
#include "trigSCT.h"
#include "ConsoleTest.h"

int triangleGroup()
{
	int responsetGroup;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// pick the color attribute (hConsole, [change me]) you want
	SetConsoleTextAttribute(hConsole, 4);
	std::string title1tGroup = "     (1) Pythagorean Theorem\n";
	for (const auto c1tGroup : title1tGroup) {
		std::cout << c1tGroup << std::flush;
		Sleep(20);
	}
	SetConsoleTextAttribute(hConsole, 4);
	std::string title3tGroup = "     (2) SOH CAH TOA\n";
	for (const auto c3tGroup : title3tGroup) {
		std::cout << c3tGroup << std::flush;
		Sleep(20);
	}
	SetConsoleTextAttribute(hConsole, 4);
	std::string title4tGroup = "     (3) TBD\n\n";
	for (const auto c4tGroup : title4tGroup) {
		std::cout << c4tGroup << std::flush;
		Sleep(20);
	}
	// Choices above this line
	SetConsoleTextAttribute(hConsole, 6);
	std::string title2tGroup = "Choose a number: ";
	for (const auto c2tGroup : title2tGroup) {
		std::cout << c2tGroup << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	std::cin >> responsetGroup;
	std::cout << "\n";
	// Comment1:start change below if you can figure out the OR usage of strings
	if (responsetGroup == 1)
	{
		pythagoreanTheorem();
	}
	if (responsetGroup == 2)
	{
		trigSCT();
	}
	if (responsetGroup == 3)
	{
		std::cout << "\n";
		main();
		return 0;
	}
	// Comment1:end
}