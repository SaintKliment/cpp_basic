#include <iostream>
#include <clocale>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");

    int x = 0;

    int nums[3];
    nums[0] = 5;
    nums[1] = 10;
    nums[2] = 15;
    nums[x++] += 1000;
    nums[x += 1] *= 10999;

    nums[1]++;
    nums[2] += 115;
    nums[0] *= 15;
    
    std::cout << nums[0] << " " << nums[1] << " " << nums[2] << std::endl;


    short numbers[5] = {1, 2, 3, 4};
    numbers[4] = 5;

    short c_nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::string names[] = {"bob", "alex", "john"};
    names[1] = "peddi";

    short matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    std::cout << matrix[0][0] << " << first elemetn and second element >> " << matrix[1][2] << std::endl;

    return 0;
}