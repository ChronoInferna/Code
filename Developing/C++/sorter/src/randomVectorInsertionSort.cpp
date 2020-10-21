#include <iostream>
#include <vector>
#include "randomVectorInsertionSort.hpp"

void insertionSort()
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

    for (int i = 1; i < vec.size(); ++i)
    {
        int j = i, value = vec[i];

        // If it's sorted, no need to continue
        if (is_sorted(vec.begin(), vec.end()) == true)
            break;

        // Sort
        for (; j > 0 && vec[j - 1] > value; --j)
            vec[j] = vec[j - 1];
        vec[j] = value;

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
