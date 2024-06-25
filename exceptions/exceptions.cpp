#include <iostream>
#include <clocale>
#include <string>
#include <fstream>

int main() {
    setlocale(LC_ALL, "Russian");

    std::ifstream file;
    file.exceptions(std::ifstream::badbit | std::ifstream::failbit);

    try {
        file.open("./some.txt");
        std::cout << "Success received file: " << std::endl;
        std::string file_text;
        while(getline(file, file_text)) {
        std::cout << file_text << std::endl;
        }
        file.close();
    } catch(std::ifstream::failure& ex) {
        std::cout << "Error" << std::endl;
    } catch (std::exception& ex) {
        std::cout << "Error: " << ex.what() << std::endl;   
    }

    return 0;
}