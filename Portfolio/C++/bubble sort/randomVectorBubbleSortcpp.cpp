#include <iostream>
#include <vector>

int main()
{
    int vectorElements;
    bool sorted = false;
    std::vector<int> vec;

    srand(time(NULL));

    std::cout << "How many elements do you want in this array?" << std::endl;
    std::cin >> vectorElements;

    // Generate and display
    for (int i = 0; i < vectorElements; ++i)
    {
        vec.push_back(std::rand() % 1000);

        if (i < vectorElements - 1)
            std::cout << vec[i] << " ";
        else
            std::cout << vec[i] << "\0" << std::endl;
    }

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
                vec[j] = vec[j] - vec[j+1];

                switched = true;
            }
        }

        // If it's sorted, no need to continue
        if (!switched)
        {
            break;
        }
    }


    // Display
    for (int i = 0; i < vectorElements; ++i)
    {
        if (i < vectorElements - 1)
            std::cout << vec[i] << " ";
        else
            std::cout << vec[i] << "\0" << std::endl;
    }

    return 0;
}