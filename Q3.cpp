#include <iostream>

using namespace std;

int main() {
  int *grades = new int[5];
  float *cgpa = new float;

  for (int i = 0; i < 5; i++) {
    cout << "Enter the grade for subject " << i + 1 << ": ";
    cin >> grades[i];
  }
  *cgpa = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4]) / 5.0;
  cout << "The CGPA is: " << *cgpa << endl;
  delete[] grades;
  delete cgpa;

  return 0;
}
