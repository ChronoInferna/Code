#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "bubbleSort.hpp"

void bubbleSort()
{
    int count = 1;
    std::vector<int> vec(100);
    uint64_t seed = rand();

    // Shuffle
    std::cout << "Shuffling Vector:" << std::endl;
    for (int i = 0; i < 100; ++i)
        vec[i] = i;
    std::shuffle(vec.begin(), vec.end(), std::default_random_engine(seed));
    for (int i : vec)
        std::cout << i << " ";
    std::cout << std::endl
              << std::endl;

    // Sorting process
    for (int i = 0; i < vec.size(); ++i)
    {
        // If it's sorted, no need to continue
        if (std::is_sorted(vec.begin(), vec.end()))
            break;

        // Sort
        for (int j = 0; j < vec.size() - 1; ++j)
            if (vec[j] > vec[j + 1])
                std::swap(vec[j], vec[j + 1]);

        // Output each sort
        std::cout << "Sort " << count++ << ": " << std::endl;
        for (int out : vec)
            std::cout << out << " ";
        std::cout << std::endl
                  << std::endl;
    }

    std::cout << "The vector has been sorted!" << std::endl
              << std::endl;
}