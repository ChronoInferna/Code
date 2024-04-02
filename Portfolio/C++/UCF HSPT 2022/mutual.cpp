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
        int accountAmount, friendshipAmount, first, second, commonAmount = 0;
        unordered_set<int> ceoSet, mySet, commonSet;
        //

        cin >> accountAmount >> friendshipAmount;
        for (int j = 0; j < friendshipAmount; j++)
        {
            cin >> first >> second;
            if ((first == 1 && second == friendshipAmount) || (second == 1 && first == friendshipAmount)) continue;
            if (first == 1) mySet.insert(second);
            if (second == 1) mySet.insert(second);
            if (first == accountAmount) ceoSet.insert(second);
            if (second == accountAmount) mySet.insert(first);
        }
        for (int x : ceoSet)
            if (mySet.find(x) != mySet.end())
            {
                commonAmount++;
                commonSet.insert(x);
            }
        cout << commonAmount << endl;
        for (int y : commonSet) cout << y << endl;
        cout << endl;
    }

    return 0;
}