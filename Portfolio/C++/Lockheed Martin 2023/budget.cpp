#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // GlOBAL VARIABLES HERE //

    //

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++)
    {
        // LOCAL VARIABLES HERE //
        vector<float> fake, real;
        float temp, sum = 0, m;
        //
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            fake.push_back(temp);
        }
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            real.push_back(temp);
        }
        for (int j = 0; j < m; j++)
            sum += (real[j] - fake[j]);
        if (sum > 0)
            cout << round(sum / m * 100) / 100 << endl;
        if (sum < 0)
            cout << (round(abs(sum) / m * 100) / 100) * -1 << endl;
    }

    return 0;
}