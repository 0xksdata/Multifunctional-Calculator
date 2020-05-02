// DarkTrux

#include "pch.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <locale> 
#include <windows.h>

int rectangleGroup()
{
	int responseRectMain;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// pick the color attribute (hConsole, [change me])
	SetConsoleTextAttribute(hConsole, 4);
	std::string title1rGroup = "     (1) Area\n";
	for (const auto c1rGroup : title1rGroup) {
		std::cout << c1rGroup << std::flush;
		Sleep(20);
	}
	SetConsoleTextAttribute(hConsole, 4);
	std::string title3rGroup = "     (2) TBD\n";
	for (const auto c3rGroup : title3rGroup) {
		std::cout << c3rGroup << std::flush;
		Sleep(20);
	}
	SetConsoleTextAttribute(hConsole, 4);
	std::string title4rGroup = "     (2) TBD\n\n";
	for (const auto c4rGroup : title4rGroup) {
		std::cout << c4rGroup << std::flush;
		Sleep(20);
	}
	// Choices above this line - well not really if you choose it breaks so fuck off
	SetConsoleTextAttribute(hConsole, 6);
	std::string title2rGroup = "Choose a number: ";
	for (const auto c2rGroup : title2rGroup) {
		std::cout << c2rGroup << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(80));
	}
	std::cin >> responseRectMain;
	std::cout << "\n";
	// Comment1:start change below if you can figure out the OR usage of strings
	if (responseRectMain == 1)
	{
		rectangleArea();
	}
	if (responseRectMain == 2)
	{
		exit(0);
	}
	if (responseRectMain == 3)
	{
		exit(0);
	}
	// Comment1:end
}
