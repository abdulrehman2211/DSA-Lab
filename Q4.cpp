#include <iostream>

using namespace std;

int main() {
  int *num1, *num2, *result;


  num1 = new int;
  num2 = new int;
  result = new int;

  cout << "Enter the first number: ";
  cin >> *num1;
  cout << "Enter the second number: ";
  cin >> *num2;

  *result = *num1 / *num2;

  cout << "The result of the division is: " << *result << endl;

  delete num1;
  delete num2;
  delete result;

  return 0;
}
