#include "pch.h"
#include "circleGroup.h"
#include "circleArea.h"
#include "ConsoleTest.h"

int circleGroup()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// pick the color attribute (hConsole, [change me]) you want
	SetConsoleTextAttribute(hConsole, 4);
	std::string title1cGroup = "     (1) Circle Area\n";
	for (const auto c1cGroup : title1cGroup) {
		std::cout << c1cGroup << std::flush;
		Sleep(20);
	}
	SetConsoleTextAttribute(hConsole, 4);
	std::string title3cGroup = "     (2) TBD\n";
	for (const auto c3cGroup : title3cGroup) {
		std::cout << c3cGroup << std::flush;
		Sleep(20);
	}
	SetConsoleTextAttribute(hConsole, 4);
	std::string title4cGroup = "     (2) TBD\n\n";
	for (const auto c4cGroup : title4cGroup) {
		std::cout << c4cGroup << std::flush;
		Sleep(20);
	}
// Choices above this line
SetConsoleTextAttribute(hConsole, 6);
std::string title2cGroup = "Choose a number: ";
for (const auto c2cGroup : title2cGroup) {
	std::cout << c2cGroup << std::flush;
	std::this_thread::sleep_for(std::chrono::milliseconds(10));
}
int responsetGroup;
std::cin >> responsetGroup;
std::cout << "\n";
// Comment1:start change below if you can figure out the OR usage of strings
if (responsetGroup == 1)
{
	circleArea();
}
if (responsetGroup == 2)
{
	std::cout << "\n";
	main();
	return 0;
}
if (responsetGroup == 3)
{
	std::cout << "\n";
	main();
	return 0;
}
// Comment1:end
}