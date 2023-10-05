#include <iostream>

int main() {

    int num = 42;

    
    int* ptr = &num;
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Value of num using pointer: " << *ptr << std::endl;

    *ptr = 100;
    
    std::cout << "Value of num after modification through pointer: " << num << std::endl;

    return 0;
}
