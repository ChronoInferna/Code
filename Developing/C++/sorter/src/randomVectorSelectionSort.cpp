#include <iostream>
#include <vector>
#include "randomVectorSelectionSort.hpp"

void selectionSort()
{
    std::string vectorElements;
    std::vector<int> vec;

    std::cout << "How many elements do you want in this vector?" << std::endl
              << std::endl;
    // Try/catch to handle menu input
    try
    {
        std::cin >> vectorElements;
        std::stoi(vectorElements);
    }
    catch (const std::invalid_argument &ia)
    {
        std::cout << std::endl;
        std::cerr << "Invalid argument, try again" << std::endl
                  << std::endl;
        return;
    }
    std::cout << std::endl;

    // Generate and display
    std::cout << "Unsorted Vector:" << std::endl;
    for (int i = 0; i < std::stoi(vectorElements); ++i)
    {
        vec.push_back(std::rand() % 1000);

        if (i < std::stoi(vectorElements) - 1)
            std::cout << vec[i] << " ";
        else
            std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < vec.size() - 1; ++i)
    {
        // Sort
        int min = i;

        if (is_sorted(vec.begin(), vec.end()) == true)
            break;

        for (int j = i + 1; j < vec.size(); ++j)
        {
            if (vec[j] < vec[min])
                min = j;
        }
        std::swap(vec[i], vec[min]);

        // Output each sort
        std::cout << "Sort " << i + 1 << ": " << std::endl;
        for (int out : vec)
            std::cout << out << " ";
        std::cout << std::endl
                  << std::endl;
    }

    std::cout << "The vector has been sorted!" << std::endl
              << std::endl;
}