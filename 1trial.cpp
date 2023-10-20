#include <iostream>

int main() {
    double totalSum = 0.0;
    double number;

    do {
        std::cout << "Enter a positive number (enter a non-positive number to exit): ";
        std::cin >> number;

        if (number > 0) {
            totalSum += number;
        }
    } while (number > 0);

    std::cout << "Sum of the positive numbers entered: " << totalSum << std::endl;

    return 0;
}
