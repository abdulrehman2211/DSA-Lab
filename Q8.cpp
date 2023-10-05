#include <iostream>

using namespace std;

struct Student {
  string name;
  int age;
  string major;
};

int main() {
  Student student;
  cout << "Enter the student's name: ";
  cin >> student.name;
  cout << "Enter the student's age: ";
  cin >> student.age;
  cout << "Enter the student's major: ";
  cin >> student.major;
  cout << "Student name: " << student.name << endl;
  cout << "Student age: " << student.age << endl;
  cout << "Student major: " << student.major << endl;

  return 0;
}
