#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    vector<string> customers;
    string input;
    bool seen = false;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> input;
        customers.push_back(input);
        for (int j = 0; j < i; j++)
        {
            if (customers[j] == input)
            {
                cout << "Customer #" << i + 1 << ": **continue working**" << endl;
                seen = true;
                break;
            }
        }
        if (seen)
        {
            seen = false;
            continue;
        }
        else
            cout << "Customer #" << i + 1 << ": Welcome to Moe's!!!" << endl;
    }
}