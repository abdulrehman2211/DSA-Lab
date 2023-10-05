#include <iostream>
using namespace std;

int main() {
    char* str = new char[4];
    char* ptr = str;

    *ptr = 'H';
    ptr++;
    *ptr = 'a';
    ptr++;
    *ptr = 'a';
    ptr++;
    *ptr = '\0';

    cout << str << endl;

    delete[] str;

    return 0;
	}
