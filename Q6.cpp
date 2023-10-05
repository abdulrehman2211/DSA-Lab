#include <iostream>

using namespace std;

int main() {
  int *num1 = new int;
  int *num2 = new int;

  cout << "Enter the first number: ";
  cin >> *num1;

  cout << "Enter the second number: ";
  cin >> *num2;

  int product = *num1 * *num2;

  cout << "The product is: " << product << endl;

  delete num1;
  delete num2;

  return 0;
}
