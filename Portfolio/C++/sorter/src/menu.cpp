// Standard header files
#include <iostream>
#include <vector>
#include <string>

// Header file for each algorithm
#include "bubbleSort.hpp"
#include "insertionSort.hpp"
#include "selectionSort.hpp"

int main()
{
	std::string menuInput;
	bool menuContinue = true;

	std::srand(time(NULL));

	std::cout << std::endl
			  << "Welcome to the random vector sorter example program. Please choose the algorithm you want to use:" << std::endl
			  << std::endl;

	while (menuContinue)
	{
		std::cout << "1) Bubble Sort" << std::endl
				  << "2) Insertion Sort" << std::endl
				  << "3) Selection Sort" << std::endl
				  << "9) Exit the program" << std::endl
				  << std::endl;
		// Try/catch to handle menu input
		try
		{
			std::cin >> menuInput;
			std::stoi(menuInput);
		}
		catch (const std::invalid_argument &ia)
		{
			std::cout << std::endl;
			std::cerr << "Invalid argument, try again" << std::endl
					  << std::endl;
			continue;
		}
		std::cout << std::endl;

		// Sort based off of selection
		switch (std::stoi(menuInput))
		{
		case 1:
			bubbleSort();
			break;

		case 2:
			insertionSort();
			break;

		case 3:
			selectionSort();
			break;

		case 9:
			menuContinue = false;
			break;

		default:
			std::cout << "Error, try again!" << std::endl
					  << std::endl;
			break;
		}
	}
	return 0;
}