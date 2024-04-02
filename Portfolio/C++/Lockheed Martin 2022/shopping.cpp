#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases, itemsTotal, commandsTotal, intInput;
    string stringInput;
    double doubleInput;

    cout << fixed << showpoint << setprecision(3);

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        vector<int> customerIDs;
        vector<pair<string, float>> itemsAndCosts;
        vector<int> itemAmounts;
        cin >> itemsTotal >> commandsTotal;

        for (int j = 0; j < itemsTotal; j++)
        {
            cin >> intInput;
            itemAmounts.push_back(intInput);
            cin >> stringInput;
            cin >> doubleInput;
            itemsAndCosts.push_back(make_pair(stringInput, doubleInput));
        }

        for (int j = 0; j < commandsTotal; j++)
        {
            
        }
    }

    return 0;
}