#include <iostream>
#include <string>

using namespace std;

struct Phone {
  string phone_number;
  string name;
};

int main() {
  
  Phone phones[30]; 
  for (int i = 0; i < 30; i++) {
    phones[i].phone_number = "0333-123456" + to_string()
    phones[i].name = "John Doe" + to_string(i);
  }

  string phone_number_to_search;
  cout << "Enter the phone number to search: ";
  cin >> phone_number_to_search;

  int mid;
  int low = 0;
  int high = 30 - 1;

  while (low <= high) {
    mid = (low + high) / 2;

    if (phones[mid].phone_number == phone_number_to_search) {
      break;
    } else if (phones[mid].phone_number < phone_number_to_search) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }


  if (low > high) {
    cout << "The phone number is not found." << endl;
  } else {
    cout << "The name of the person associated with the phone number is: " << phones[mid].name << endl;
  }

  return 0;
}
