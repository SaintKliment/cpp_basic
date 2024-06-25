#include <iostream>
#include <clocale>
#include <string>
#include <fstream>

float divide(short a, short b) {
    if (b == 0) {
        throw "dividing by zero is prohibited\n";
    } 

    return a / b;
}

int main() {
    setlocale(LC_ALL, "Russian");
    short a, b;
    std::cout << "enter first number: ";
    std::cin >> a;
    std::cout << "enter second number: ";
    std::cin >> b;

    try {
        float res = divide(a, b);
        std::cout << "res = " << res << std::endl;
    } catch (const char* msg) {
        std::cout << msg;
    }

    return 0;
}