#include <iostream>

using namespace std;

int main() {
  int *roll_numbers = new int[10];

  for (int i = 0; i < 10; i++) {
    roll_numbers[i] = i + 1;
  }

  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (*(roll_numbers + i) > *(roll_numbers + j)) {
        int temp = *(roll_numbers + i);
        *(roll_numbers + i) = *(roll_numbers + j);
        *(roll_numbers + j) = temp;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << *(roll_numbers + i) << " ";
  }
  cout << endl;

  delete[] roll_numbers;

  return 0;
}

