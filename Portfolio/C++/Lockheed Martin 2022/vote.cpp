#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases, candidates, voteAmount, votesTotal;
    string input;

    cout << fixed << showpoint << setprecision(2);

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> voteAmount >> candidates;
        vector<vector<int>> votes(candidates, vector<int>(candidates, 0));
        for (int j = 0; j < voteAmount; j++)
        {
            cin >> input;
            for (int k = 0; k < candidates; k++)
                for (int l = 0; l < candidates; l++)
                {
                    votes[k][(int)input[l] - 65]++;
                }
        }

        // Candidate A won with 52.0% of the vote after 3 tallies
        // votesTotal = 0;
        // for (int a : votes)
        //     votesTotal += a;
        // for (int a : votes)
        // {
        //     int maxPercent;
        //     if (a > (votesTotal/2+1))
        //     {
        //         cout << 
        //     }
        // }

    }

    return 0;
}