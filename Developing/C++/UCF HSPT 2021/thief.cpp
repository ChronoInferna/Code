#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// DOESN'T WORK??? UNCLEAR

int main()
{
    int cases;
    int paintingCount;
    vector<int> paintings;
    int temp;
    long leftValue;
    long rightValue;
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        leftValue = 0;
        rightValue = 0;
        // Create museam
        cin >> paintingCount;
        for (int j = 0; j < paintingCount; j++)
        {
            cin >> temp;
            paintings.push_back(temp);
        }
        // Find left value
        for (int j = 1; j < paintings.size(); j++)
        {
            leftValue += paintings[j];
        }
        // Find right value
        for (int j = paintings.size() - 2; j >= 0; j--)
        {
            rightValue += paintings[j];
        }
        if (leftValue > rightValue)
            cout << leftValue << endl;
        else
            cout << rightValue << endl;
        paintings.clear();
    }
}