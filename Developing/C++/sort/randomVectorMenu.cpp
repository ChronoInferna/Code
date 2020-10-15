#include <iostream>
#include <vector>
// Header file for each algorithm
#include "randomVectorBubbleSort.hpp"
#include "randomVectorInsertionSort.hpp"

// TODO
// Maybe add input so you can sort your own algorithm
// and add the option to randomize or add your own?
// Loop menu input
// Throw/catch for amount of elements in vector

int main()
{
    int menuInput;

    srand(time(NULL));

    // Menu
    std::cout << "Welcome to the random vector sorter example program. Please choose the algorithm you want to use:" << std::endl
              << std::endl
              << "1) Bubble Sort" << std::endl
              << "2) Insertion Sort" << std::endl
              << std::endl;
    std::cin >> menuInput;
    std::cout << std::endl;

    switch (menuInput)
    {
    case 1:
        bubbleSort();
        break;

    case 2:
        insertionSort();
        break;

    default:
        std::cout << "Error, try again!" << std::endl;
        break;
    }

    return 0;
}