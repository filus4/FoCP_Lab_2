#include <iostream>
#include <cmath>

int main() {

    std::cout << "Please insert a number: " << std::endl;

    int number;
    std::cin >> number;

    for (int i = 2; i < number; i += 1 ) {
        if (number % i == 0 ) {
            std::cout << "Your number is not prime ;-;" << std::endl;
            return 0;
        }
    }

    std::cout << "Your number is prime ^-^" << std::endl;

    return 0;
}