#include <iostream>
#include <clocale>
#include <string>

int main() {
    short user_value;
    std::cout << "Enter your number: ";
    std::cin >> user_value;

    short check_value = 5;

    if (user_value == check_value) {
        std::cout << "5 = 5" << std::endl;
    } else {
        std::cout << "5 != " << user_value << std::endl;
    }
    
    bool isAngry;
    std::string user_answer;
    std::cout << "Are you angry (yes or no): ";
    std::cin >> user_answer;
    if (user_answer == "yes") {
        isAngry = true;
    } else if (user_answer == "no") {
        isAngry = false;
    } else {
        std::cout << "uncorrect answer." << std::endl;
    }
    if (isAngry) {
        std::cout << ">> ";
        std::cout << "your angry state is True" << std::endl;
    } else {
        std::cout << "your angry state is False "<< std::endl;
    }

    if (isAngry && user_value == check_value) {
        std::cout << "WINNER!!!" << std::endl;    
    }

    if (isAngry || user_value == check_value) {
        std::cout << "LOOSER!!!" << std::endl; 
    }

    float x = 1.5f;
    int result = x == 0.5f ? 1 : 0;
    std::cout << result << std::endl;
    return 0;
}