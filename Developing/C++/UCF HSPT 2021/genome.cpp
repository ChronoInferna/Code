#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// TOO LONG?

int main()
{
    int cases;
    string aturn;
    string cturn;
    string tturn;
    string gturn;
    string initial;
    int years;
    string output;
    string temp;
    long acount = 0;
    long ccount = 0;
    long tcount = 0;
    long gcount = 0;
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        cin >> aturn >> cturn >> tturn >> gturn >> initial >> years;
        output = initial;
        // Transforms into final string
        for (int j = 0; j < years; j++)
        {
            temp = "";
            for (int j = 0; j < output.size(); j++)
            {
                if (output[j] == 'A')
                {
                    temp.append(aturn);
                    continue;
                }
                if (output[j] == 'C')
                {
                    temp.append(cturn);
                    continue;
                }
                if (output[j] == 'T')
                {
                    temp.append(tturn);
                    continue;
                }
                if (output[j] == 'G')
                {
                    temp.append(gturn);
                    continue;
                }
            }
            output = temp;
        }

        // Figures out output
        acount = 0;
        ccount = 0;
        tcount = 0;
        gcount = 0;
        for (int j = 0; j < output.size(); j++)
        {
            if (output[j] == 'A')
            {
                acount++;
                continue;
            }
            if (output[j] == 'C')
            {
                ccount++;
                continue;
            }
            if (output[j] == 'T')
            {
                tcount++;
                continue;
            }
            if (output[j] == 'G')
            {
                gcount++;
                continue;
            }
        }
        acount %= 1000000007;
        ccount %= 1000000007;
        tcount %= 1000000007;
        gcount %= 1000000007;
        cout << "Genome #" << i + 1 << ": " << acount << " " << ccount << " " << tcount << " " << gcount << endl;
    }
}
// atcg cat
// atcg cat g gg g atcg cat