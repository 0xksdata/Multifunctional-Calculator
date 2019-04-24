// DarkTrux

#include "pch.h"
#include "rectangleArea.h"
#include "trigSCT.h"
#include "circleArea.h"
#include "pythagoreanTheorem.h"
#include "circleGroup.h"
#include "triangleGroup.h"
#include "rectangleGroup.h"
#include "ConsoleTest.h"
#include "cylinderGroup.h"

#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <locale> 
#include <windows.h>

int main()
	{
		int responseMain;
	    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		// pick the color attribute (hConsole, [change me]) you want
		SetConsoleTextAttribute(hConsole, 6);
		std::string titleMain = "Multi Functional Calculator:\n\n";
		for (const auto c1Main : titleMain) {
			std::cout << c1Main << std::flush;
			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}
		SetConsoleTextAttribute(hConsole, 3);
		std::string title1Main = "     (1) Triangles\n";
		for (const auto c2Main : title1Main) {
			std::cout << c2Main << std::flush;
			Sleep(20);
		}
		SetConsoleTextAttribute(hConsole, 3);
		std::string title2Main = "     (2) Circles\n";
		for (const auto c3Main : title2Main) {
			std::cout << c3Main << std::flush;
			Sleep(20);
		}
		SetConsoleTextAttribute(hConsole, 3);
		std::string title3Main = "     (3) Rectangles\n";
		for (const auto c4Main : title3Main) {
			std::cout << c4Main << std::flush;
		}
		SetConsoleTextAttribute(hConsole, 3);
		std::string title5Main = "     (4) Cylinders\n\n";
		for (const auto c6Main : title5Main) {
			std::cout << c6Main << std::flush;
		}
		// Choices above this line
		SetConsoleTextAttribute(hConsole, 6);
		std::string title4Main = "Choose a number: ";
		for (const auto c5Main : title4Main) {
			std::cout << c5Main << std::flush;
			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}
		std::cin >> responseMain;
		std::cout << "\n";
		// Comment1:start change below if you can figure out the OR usage of strings
		if (responseMain == 1)
		{
			triangleGroup();
		}
		if (responseMain == 2)
		{
			circleGroup();
		}
		if (responseMain == 3)
		{
			rectangleGroup();
		}
		if (responseMain == 4)
		{
			cylinderGroup();
		}
		// Comment1:end
	}
