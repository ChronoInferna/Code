#include <iostream>
#include <cmath>

using namespace std;

bool isJennyNumber(int input);
bool isPrime(int input);

int main()
{
    int output;
    int cases = 0;
    // Main loop
    cin >> cases;
    for (int t = 0; t < cases; t++)
    {
        int d;
        int i;
        int numberCheck = 1;
        int endNumber;
        int jennyethNumber = 0;
        bool found = false;
        cin >> d >> i;
        // Set numberCheck, the starting value to check for
        if (d > 10)
        {
            cout << "Brice doesn't stand a chance!" << endl;
            continue;
        }
        if (d > 1)
        {
            numberCheck = pow(10, d - 1) + 1;
            endNumber = numberCheck * 10 - 10;
        }
        else
        {
            numberCheck = pow(10, d - 1);
            endNumber = numberCheck * 10;
        }

        for (; numberCheck < endNumber; numberCheck += 2)
        {
            if (isJennyNumber(numberCheck) && jennyethNumber < i)
                jennyethNumber++;
            else if (isJennyNumber(numberCheck) && jennyethNumber == i)
            {
                cout << numberCheck << endl;
                found = true;
                break;
            }
        }
        if (found == false)
        {
            cout << "Brice doesn't stand a chance!" << endl;
        }
    }
}

bool isJennyNumber(int input)
{
    if (isPrime(input) == false || isPrime(input + 2) == false)
    {
        return false;
    }
    // Check for distinct digits
    int digitCount[10] = {};
    int number = input;
    do
    {
        if (digitCount[number % 10] + 1 > 1)
        {
            return false;
        }
        digitCount[number % 10] = digitCount[number % 10] + 1;
        number /= 10;
    } while (number != 0);

    return true;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}