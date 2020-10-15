#include <iostream>
#include <cmath>

bool is_prime(int number) {

    for (int i = 2; i < number; i += 1 ) {
        if (number % i == 0 ) {
            return false;
        }
    }
    return true;
}

int read_int() {
    std::cout << "Please insert a number: " << std::endl;

    int number;
    std::cin >> number;

    return number;
}

int main() {
    int number = read_int();

    if (is_prime(number)) {
        std::cout << "Your number is prime ^-^" << std::endl;
    }   else {
        std::cout << "Your number is not prime ;-;" << std::endl;
    }

    return 0;
}