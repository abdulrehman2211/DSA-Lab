#include <iostream>
#include <string>
using namespace std;

int main() {
  string name = "Abdul Rehman"; 
  string  RegNo = "sp22-bcs-003";
  string* ptr = &name;
 
  cout << name << "\n";
cout <<  RegNo << "\n";
  cout << &name << "\n";
  cout << ptr << "\n";
  return 0;
}
