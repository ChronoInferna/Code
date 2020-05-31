#include <iostream>

using namespace std;

int main ()
{
  // Input variable
  int mainInput;

  // Input number prompt
  cout << "Enter the number you want to be factored (Must be between 1-2,147,483,646 inclusive, no commas):\n";
  cin >> mainInput;
  cout << "Factors:" << endl;

  // Goes through one of the three options: positive, negative, and zero
  // Positive
  if (int > 0) {
    for (int i = mainInput; i > 0; i--)
      {
        // Checks if factor, then prints
        if (mainInput % i == 0)
    {
      cout << i << endl;
    }
      }
  }
  // Negative
  if (int < 0) {
    for (int i = mainInput; i < (mainInput * -1 ); i++) {
      if (mainInput % == 0) {
        cout << i << endl;
      }
    }
  }
  // Zero
  if (int == 0) {
    cout << 0 << endl;
  }

  return 0;
}
