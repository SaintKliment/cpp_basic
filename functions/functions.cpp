#include <iostream>
#include <clocale>
#include <string>

void helloWorld(std::string word = "NONE");
short sum(short a, short b);
void sum_screen(short a, short b);
void count(); 

int main() {
    setlocale(LC_ALL, "Russian");
    std::string word = "help, sos, help";

    helloWorld(word);
    helloWorld();

    short res_sum = sum(100, 7921);
    helloWorld(std::to_string(res_sum));

    short x = 123;
    sum_screen(x, 195);

    short min = std::min(12, 432);
    helloWorld(std::to_string(min));

    count();
    count();
    count();

    return 0;
}

void helloWorld(std::string word) {
    std::cout << "Result = " << word << std::endl;
}

short sum(short a, short b) {
    short c = a + b;
    return c;
}

void sum_screen(short a, short b) {
    short result = sum(a, b);
    helloWorld(std::to_string(result));
}

void count() {
    static short x = 0; // static save pre value
    x++;
    std::cout << "Count = " << x << std::endl;
}