#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 5;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int sum = *ptr1 + *ptr2;
    int difference = *ptr1 - *ptr2;
    int product = *ptr1 * *ptr2;
    int quotient = *ptr1 / *ptr2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}

