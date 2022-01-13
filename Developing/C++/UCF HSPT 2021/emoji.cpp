#include <iostream>
#include <cmath>
using namespace std;

// WORKS

int main()
{
    int cases;
    string string;
    bool no = false;
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        no = false;
        cin >> string;
        for (int j = 0; j < string.size(); j++)
        {
            for (int k = j + 1; k < string.size(); k++)
            {
                if (string[j] == string[k] && j != k)
                {
                    cout << "Nope" << endl;
                    no = true;
                    break;
                }
            }
            if (no == true)
            {
                break;
            }
            if (j == string.size() - 1 && no == false)
            {
                cout << "Emote away!" << endl;
                break;
            }
        }
    }
}