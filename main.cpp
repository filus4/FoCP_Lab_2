#include <iostream>

int pow(int base, int power) {
    int result = 1;
    
    for (int i = 0; i < power; i++) {
        result *= base;
    }

    return result;
}

int fibonacci_iterative(int index)
{
    int a = 0;
    int b = 1;

    if (index == 0 || index == 1)
    {
        return index;
    }

    for (int i = 1; i < index; i++)
    {
        int tmp = a + b;
        a = b;
        b = tmp;
    }

    return b;
}

int fibonacci_recursive(int index) {
    if (index < 2) {
        return index;
    }

    return fibonacci_recursive(index - 2) + fibonacci_recursive(index - 1);
}

int read_int() {
    std::cout << "Please introduce a number:" << std::endl;

    int n;
    std::cin >> n;

    return n;
}


// 1 - Read base from command line
// 2 - Read power from command line 
// 3 - Calculate power
// 4 - Print the result

int main() {
    int index = read_int();

    int result = fibonacci_iterative(index);

    std::cout << "The result is: " << result << std::endl;

    return 0;
}