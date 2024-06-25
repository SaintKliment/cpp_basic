#include <iostream>
#include <clocale>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");
    
    // short int == short
    // unsigned онли для положительных значений

    unsigned short only_positive_short_number = 65534; // от 0 до 65535
    short short_number = 2;

    unsigned int only_positive_int_number = 4294967294; // от 0 до 4 294 967 295
    int number = 10;

    long long long_number = 1; //  от −9 223 372 036 854 775 808 до +9 223 372 036 854 775 807 занимает 8 байт

    std::cout << "Variable \"number\" = " << number << std::endl << " Size = " << sizeof(number) << std::endl;
    std::cout << "Variable \"short_number\" = " << short_number << std::endl << " Size = " << sizeof(short_number) << std::endl;
    
    std::cout << "size of short = " << sizeof(short) << " bytes" << std::endl;
    std::cout << "size of int = " << sizeof(int) << " bytes" << std::endl;
    
    std::cout << "Max size of short = " << __SHRT_MAX__ << std::endl; // от –32768 до 32767
    std::cout << "Max size of int = " << __INT_MAX__ << std::endl; // от −2 147 483 648 до 2 147 483 647 (при 4 байтах)


    float fl_number = 5.5678f; // 4 bytes диапазон = +/- 3.4E-38 до 3.4E+38
    double db_number; // 8 bytes диапазон = +/- 1.7E-308 до 1.7E+308
    long double l_db_umber = 123.123121F; // > 8 
    
    char symbol = '+'; /*
    UTF-32 представляет все символы как 32-битные значения
    UTF-16 представляет символы как одно или два 16-битных значения.
    UTF-8 представляет символ как последовательность переменной длины от одного до четырех байт. Набор символов ASCII появляется в UTF-8 как однобайтовые коды, которые имеют те же значения кодов, что и в ASCII. UTF-8 на сегодняшний день является самой популярной кодировкой Unicode.
    */ 
    wchar_t sym_2 {L'\x41'}; // для наборов символов, размер которых выходит за пределы одного байта 
    
    bool stop = false; // T or F

    std::string word = "hi, my name is Zhenya!";
    

    short first_num, second_num, result;
    char math_sym;
    std::cout << "Enter number 1: ";
    std::cin >> first_num; 
    
    std::cout << "Enter math symbol: ";
    std::cin >> math_sym;
    
    std::cout << "Enter number 2: ";
    std::cin >> second_num;

    if (math_sym == '+') {
        result = first_num + second_num;
    }
    if (math_sym == '/') {
        result = first_num / second_num;
    }
    if (math_sym == '*') {
        result = first_num * second_num;
    }
    if (math_sym == '-') {
        result = first_num - second_num;
    }
    
    std::cout << "Result = " << result << std::endl;


    auto num = 5; // auto автоматически обозначает тип переменной
    int num123 (123);
    int num321 {312};
    std::cout << num123 << std::endl;
    std::cout << num321 << std::endl;

    const std::string key = "SHA256fdsijgfndk234bhj2h3b1kdjnfskmnfbhdsbvfisdnf12312hk3b12khwjenfjewnfewunu1hg7129bd2";
    std::cout << key << std::endl;

    return 0;
}