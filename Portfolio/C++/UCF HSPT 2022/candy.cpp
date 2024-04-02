#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // GlOBAL VARIABLES HERE //

    //

    for (int i = 0; i < n; i++)
    {
        // LOCAL VARIABLES HERE //
        int bagAmount, siblings, input, max = 0, largestSum, test;
        //
        
        cin >> bagAmount >> siblings;
        unordered_map<int, int> bags;
        int bagsArray[bagAmount];
        for (int j = 0; j < bagAmount; j++)
        {
            cin >> input;
            bagsArray[j] = input;
        }

        for (int j = 0; j < bagAmount; j++) bags[input] = j;
        int sortedBagsArray[bagAmount];
        for (int j = 0; j < bagAmount; j++) sortedBagsArray[j] = bagsArray[j];
        sort(sortedBagsArray, sortedBagsArray + bagAmount, greater<int>());
        largestSum = sortedBagsArray[0] + sortedBagsArray[1];
        test = largestSum - (largestSum % siblings);

        while (test > 0)
        {
            for (int j = 0; j < bagAmount; j++)
            {
                if (bagsArray[j] > test) continue;
                if ((bags.find(test - bagsArray[j]) != bags.end()) && (bags[test - bagsArray[j]] != j))
                {
                    max = test / siblings;
                    goto end;
                }
            }
            test -= siblings;
        }
        end:;
        cout << max << endl;
    }

    return 0;
}