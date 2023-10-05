#include <iostream>

using namespace std;

int main() {
  int a = 10;
  int b = 5;


  int *p_a = &a;
  int *p_b = &b;

  
  int difference = *p_a - *p_b;

  cout << "The difference is: " << difference << endl;

  return 0;
