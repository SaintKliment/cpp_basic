#include <iostream>
#include <clocale>
#include <string>

void helloWorld() {
    std::cout << "Hello World!" << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    helloWorld();
    return 0;
}