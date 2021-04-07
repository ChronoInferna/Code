#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "insertionSort.hpp"

void insertionSort()
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

    for (int i = 0; i < vec.size(); ++i)
    {
        int j = i, value = vec[i];

        // If it's sorted, no need to continue
        if (std::is_sorted(vec.begin(), vec.end()))
            break;

        // Sorting process
        for (; j > 0 && vec[j - 1] > value; --j)
            vec[j] = vec[j - 1];
        vec[j] = value;

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
