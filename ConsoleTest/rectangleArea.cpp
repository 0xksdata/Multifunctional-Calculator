#include "pch.h"
#include "rectangleArea.h"
#include "ConsoleTest.h"

int rectangleArea()
{
	float l, w;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// pick the color attribute (hConsole, [change me]) you want
	SetConsoleTextAttribute(hConsole, 2);
	std::string title = "Area Calculator:\n\n";
	for (const auto c1 : title) {
		std::cout << c1 << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	SetConsoleTextAttribute(hConsole, 6);
    std::cout << "Enter the (l)ength: ";
	std::cin >> l;
	std::cout << "Enter the (w)idth: ";
	std::cin >> w;
	std::cout << "\n";
	std::cout << "(A)rea = ";
	SetConsoleTextAttribute(hConsole, 3);
	std::cout << (l * w);
	SetConsoleTextAttribute(hConsole, 6);
	std::cout << " units squared.\n";
	std::string responseRect;
	std::cout << "Would you like to use this again? \n";
	std::cout << "(Y)es or (N)o: ";
	std::cin >> responseRect;
	if (responseRect == "Y")
	{
		std::cout << "\n";
		main();
		return 0;
	}
	else
	{
		if (responseRect == "y")
		{
			std::cout << "\n";
			main();
			return 0;
		}
		if (responseRect == "N")
		{
			exit(0);
		}
		else
		{
			if (responseRect == "n")
			{
				exit(0);
			}
		}
	}

}