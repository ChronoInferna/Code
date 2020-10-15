#include <iostream>
#include <vector>
#include "randomVectorBubbleSort.hpp"

void bubbleSort()
{
    int vectorElements;
    std::vector<int> vec;

    std::cout << "How many elements do you want in this vector?" << std::endl
              << std::endl;
    std::cin >> vectorElements;
    std::cout << std::endl;

    // Generate and display
    std::cout << "Unsorted Vector:" << std::endl;
    for (int i = 0; i < vectorElements; ++i)
    {
        vec.push_back(std::rand() % 1000);

        if (i < vectorElements - 1)
            std::cout << vec[i] << " ";
        else
            std::cout << vec[i] << "\0" << std::endl;
    }
    std::cout << std::endl;

    // Sort
    for (int i = 0; i < vec.size(); ++i)
    {
        bool switched = false;

        for (int j = 0; j < vec.size() - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                // Swap variables
                vec[j] = vec[j] + vec[j + 1];
                vec[j + 1] = vec[j] - vec[j + 1];
                vec[j] = vec[j] - vec[j + 1];

                switched = true;
            }
        }

        // If it's sorted, no need to continue
        if (switched == false)
        {
            break;
        }
        else
        {
            // Output each sort
            std::cout << "Sort " << i + 1 << ": " << std::endl;
            for (int j = 0; j < vec.size(); ++j)
            {
                std::cout << vec[j] << " ";
            }
            std::cout << std::endl
                      << std::endl;
        }
    }

    std::cout << "The vector has been sorted!" << std::endl
              << std::endl;
}