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
        int n, m, input;
        //
        cin >> n;
        int alice[n];
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            alice[j] = input;
        }
        cin >> m;
        int bob[m];
        for (int j = 0; j < m; j++)
        {
            cin >> input;
            bob[j] = input;
        }

        int alicePile[*max_element(alice.begin(), alice.end())] = {0};
        for (int k = 0; k < n; k++)
            alicePile[alice[k]] = 1;

        int bobPile[*max_element(bob.begin(), bob.end())] = {0};
        for (int k = 0; k < n; k++)
            bobPile[bob[k]] = 1;

        if (alicePile.size() > bobPile.size())
    }

    return 0;
}