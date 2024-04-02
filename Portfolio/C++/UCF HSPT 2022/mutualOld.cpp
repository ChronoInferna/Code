#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // GlOBAL VARIABLES HERE //
    int accountAmount, friendshipAmount;
    //

    for (int i = 0; i < n; i++)
    {
        // LOCAL VARIABLES HERE //
        int first, second, commonAmount = 0;
        unordered_set<int> test, common;
        //
        cin >> accountAmount >> friendshipAmount;
        for (int j = 0; j < friendshipAmount; j++)
        {
            cin >> first >> second;
            if ((first == 1 && second == friendshipAmount) || (second == 1 && first == friendshipAmount)) continue;
            if ((test.find(first) != test.end()) && (common.find(first) == common.end()) && ((second == 1) || (second == accountAmount)))
            {
                common.insert(first);
                commonAmount++;
                continue;
            }
            if ((test.find(second) != test.end()) && (common.find(second) == common.end()) && ((first == 1) || (first == accountAmount)))
            {
                common.insert(second);
                commonAmount++;
                continue;
            }
            if ((test.find(second) == test.end()) && ((first == 1) || (first == friendshipAmount)))
            {
                test.insert(second);
                continue;
            }
            if ((test.find(first) == test.end()) && ((second == 1) || (second == friendshipAmount)))
            {
                test.insert(first);
                continue;
            }
        }
        cout << commonAmount << endl;
        for (auto const &out : common) cout << out << endl;
        cout << endl;
    }

    return 0;
}