#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// UNFINISHED

int main()
{
    int cases;
    string category;
    int dictCount;
    vector<string> dictionary;
    string dictIn;
    int gameCount;
    string word;
    bool cheater = false;
    bool wordWorks = true;
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        cin >> category;
        cin >> dictCount;
        for (int j = 0; j < dictCount; j++)
        {
            cin >> dictIn;
            dictionary.push_back(dictIn);
        }
        cin >> gameCount;
        for (int j = 0; j < gameCount; j++)
        {
            cin >> word;
            // Compare each word
            for (int k = 0; k < dictionary.size(); k++)
            {
                // First compare lengths
                if (word.length() == dictionary[k].length())
                {
                    for (int l = 0; l < dictionary[k].length(); l++)
                    {
                        // Then compare letters
                        if (word[l] == '_')
                        {
                            continue;
                        }
                        else if (word[l] == dictionary[k][l])
                        {
                            continue;
                        }
                        else
                        {
                            wordWorks = false;
                            break;
                        }
                    }
                    if (wordWorks == true)
                    {
                        cout << "No cheaters here!" << endl;
                        goto notCheater;
                    }
                    else
                    {
                        wordWorks = true;
                        continue;
                    }
                }
                else if (k == dictionary.size())
                {
                    cheater = true;
                    break;
                }
                else
                    continue;
            }
            notCheater:
        }
    }
}