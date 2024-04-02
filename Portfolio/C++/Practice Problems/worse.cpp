#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variables
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string input;
    string letter;

    // Main loop
    getline(cin, input);
    while (getline(cin, input))
    {
        stringstream inputstream(input);
        while (inputstream >> letter)
            cout << alphabet[letter.size() - 1];
        cout << endl;
    }
}