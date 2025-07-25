#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // Take name and age as input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // allows space in name

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Output greeting and year of birth
    std::cout << "\nHello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "You were probably born in " << (2025 - age) << "." << std::endl;

    // Take 3 numbers as input and do basic math
    double num1, num2, num3;
    std::cout << "\nEnter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    double sum = num1 + num2 + num3;
    double avg = sum / 3;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << avg << std::endl;

    return 0;
}
