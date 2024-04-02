#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variables
    string input;
    int cases;

    // Main loop
    getline(cin, input);
    while (getline(cin, input))
    {
        input.erase(remove(input.begin(), input.end(), 'e'), input.end());
        cout << input << endl;
    }
}