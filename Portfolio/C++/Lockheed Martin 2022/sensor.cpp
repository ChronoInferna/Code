#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        vector<int> sensors;
        int sensorAmount, input;
        cin;
        cin >> sensorAmount;
        // cout << sensorAmount << endl;
        for (int j = 0; j < sensorAmount - 1; j++)
        {
            cin >> input;
            sensors.push_back(input);
        }
        sort(sensors.begin(), sensors.end());
        // for (int out : sensors)
        //     cout << out << endl;
        for (int j = 0; j < sensorAmount; j++)
        {
            if (j == sensorAmount)
                cout << j << endl;
            if (sensors[j] != j + 1)
            {
                cout << j + 1 << endl;
                break;
            }
        }
    }

    return 0;
}