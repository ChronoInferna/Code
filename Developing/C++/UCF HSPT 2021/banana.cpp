#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

// WHY IS THIS WRONG?

int main()
{
    int cases;
    int n;
    vector<pair<int, int>> initialPos;
    vector<pair<int, int>> finalPos;
    int temp1, temp2;
    double sum;
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        sum = 0;
        initialPos.clear();
        finalPos.clear();
        // Inputs
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> temp1 >> temp2;
            initialPos.push_back(make_pair(temp1, temp2));
        }
        for (int j = 0; j < n; j++)
        {
            cin >> temp1 >> temp2;
            finalPos.push_back(make_pair(temp1, temp2));
        }
        // Calculate distances
        for (int j = 0; j < n; j++)
        {
            sum += sqrt(pow(finalPos[j].first - initialPos[j].first, 2) + pow(finalPos[j].second - initialPos[j].second, 2) * 1.0);
        }
        cout << setprecision(11) << sum << endl;
    }
}