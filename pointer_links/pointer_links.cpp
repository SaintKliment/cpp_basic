#include <iostream>
#include <clocale>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");
    
    short num = 6;
    short& ref = num;      
    // std::cout << "value = " << num << std::endl;
    // std::cout << "address ref = " << &ref << "\t address num = " << &num << std::endl;


    int num2 = 10;
    int *pointer1;
    short *pointer2 = &num;
    pointer1 = &num2;
    // std::cout << pointer1 << "\t" << *pointer1 << std::endl;

    // std::cout << &ref << "\t" << &num << "\t" << pointer2 << std::endl;

    *pointer2++; // change value
    // pointer2++; // change memory cell


    int *p3 = new int(123);
    *p3 = 10; 
    // std::cout << *p3 << std::endl;
    delete p3;
    p3 = nullptr;
    if (p3 != nullptr) {
        // std::cout << "P3 = " << *p3;
    }
    // new => delete


    int a[] = {3, 5, 7, 2};
    int* ptr= a;

    for( int i = 0; i < 4; i++) {
        // std::cout << ptr[i] << "\t" << &ptr[i] << std::endl;
        std::cout << *(ptr + i) << "\t" << &ptr[i] << std::endl;
    }

    return 0;
}