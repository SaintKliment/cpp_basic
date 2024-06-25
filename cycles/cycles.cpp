#include <iostream>
#include <clocale>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");

    // short count = 5;
    // for (short i = 0; i < count; i++ ) {
    //     std::cout << i << std::endl;
    // }

    // short w = 10;
    // while (w > count) {
    //     std::cout << w << std::endl;
    //     w--;
    // }

    // short count = 5;
    // bool isInLoop = true;
    // do {
    //    count += 10;
    //    std::cout << "count = " << count << std::endl;

    //    if (count > 100) {
    //     isInLoop = false;
    //    }
    // } while (isInLoop);
    
    // for (short i = 0; i < 20; i++) {
    //     if (i == 10) break;

    //     if (i % 2 == 0) continue;

        
    //     std::cout << "you in the cycle and i =" << i << std::endl; 
    // }
    // std::cout << "you out the cycle and the end" << std::endl;

    // short nums[] = {1, 2, 3, 4, 5};
    // const short SIZE = 5; 

    // for (short i = 0; i < SIZE; i++) {
    //     nums[i] += 1000;
    //     std::cout << nums[i] << std::endl;
    // }

    // short k = 0;
    // while (k < SIZE) {
    //     std::cout << "enter number for elem number №" << k << ": ";
    //     std::cin >> nums[k];
    //     k++;
    // }
    
    // short el = 0;
    // do {
    //     // nums[el] += 2000;
    //     std::cout << nums[el] << std::endl;
    //     el++;
    // } while (el < SIZE);

    const short SIZE_MATRIX_1 = 2;
    const short SIZE_MATRIX_2 = 3;

    short matrix[SIZE_MATRIX_1][SIZE_MATRIX_2];
    for (short i = 0; i < SIZE_MATRIX_1; i++) {
        std::cout << "this is " << i << " str of matrix" << std::endl;
        for (short k = 0; k < SIZE_MATRIX_2; k++) {
            std::cout << "enter number for this str of matrix: ";
            std::cin >> matrix[i][k]; 
         }
    }

    for (short i = 0; i < SIZE_MATRIX_1; i++) {
        for (short k = 0; k < SIZE_MATRIX_2; k++) {
            std::cout << matrix[i][k] << "\t"; 
        }
        std::cout << std::endl;
    }

    return 0;
}