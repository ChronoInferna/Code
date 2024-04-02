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
        int m, health, weight = 0;
        float total = 0;
        string priority;
        cin >> m;
        //

        for (int j = 0; j < m; j++)
        {
            cin >> priority >> health;
            if (priority == "LOW")
            {
                total += health;
                weight++;
            }
            if (priority == "MEDIUM")
            {
                total += health * 2;
                weight += 2;
            }
            if (priority == "HIGH")
            {
                total += health * 3;
                weight += 3;
            }
        }
        cout << round(total * 10 / weight) << endl;
    }

    return 0;
}