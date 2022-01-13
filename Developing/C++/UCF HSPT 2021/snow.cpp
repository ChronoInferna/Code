#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// UNFINISHED

int main()
{
    int cases;
    int n;
    vector<int> height;
    int temp;
    string s;
    int count;
    int highSnow; // Index of highest snowman
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        height.clear();
        cin >> n;
        for (int j; j < n; j++)
        {
            cin >> temp;
            height.push_back(temp);
        }
        cin >> s;
        // Move l or r
        for (int j = 0; j < s.size(); j++)
        {
            // Find highSnow
            highSnow = 0;
            for (int k : height)
            {
                if (height[k] > height[highSnow])
                    highSnow = k;
            }

            if (s[j] == 'R')
            {
                for (int k = 0; k < height[highSnow] - 1; k++)
                {
                    if (height[k] == 0)
                    {
                        k--;
                    }
                    else
                        height[k] = 0;
                }
            }
            if (s[j] == 'L')
            {
            }
            count++;
        }
        cout << count << endl;
    }
}