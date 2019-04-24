#include "pch.h"
#include "cylinderGroup.h"
#include "cylinderVolume.h"

int cylinderGroup()
{
	// int responseCylMain;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// pick the color attribute (hConsole, [change me])
	SetConsoleTextAttribute(hConsole, 4);
	std::string title1cylGroup = "     (1) Volume\n";
	for (const auto c1cylGroup : title1cylGroup) {
		std::cout << c1cylGroup << std::flush;
		Sleep(20);
	}
	// pick the color attribute (hConsole, [change me])
	SetConsoleTextAttribute(hConsole, 4);
	std::string title2cylGroup = "     (2) Surface Area\n";
	for (const auto c2cylGroup : title2cylGroup) {
		std::cout << c2cylGroup << std::flush;
		Sleep(20);
	}
	// pick the color attribute (hConsole, [change me])
	SetConsoleTextAttribute(hConsole, 4);
	std::string title3cylGroup = "     (2) Surface Area\n";
	for (const auto c3cylGroup : title3cylGroup) {
		std::cout << c3cylGroup << std::flush;
		Sleep(20);
	}
	return 0;
}
