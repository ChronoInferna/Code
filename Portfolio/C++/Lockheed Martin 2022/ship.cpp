#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases, first, second;
    string input;

    for (int i = 0; i < cases; i++)
    {
        vector<string> systems;
        vector<string> notFound;
        vector<string>::iterator it;
        cin >> first >> second;
        for (int j = 0; j < first; j++)
        {
            cin >> input;
            systems.push_back(input);
        }
        for (int j = 0; j < second; j++)
        {
            cin >> input;
            it = find(systems.begin(), systems.end(), input);
            if (it == systems.end())
                notFound.push_back(input);
        }
        for (string output : notFound)
            cout << output << endl;
    }

    return 0;
}