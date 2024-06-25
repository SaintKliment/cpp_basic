#include <iostream>
#include <clocale>
#include <string>
#include <fstream>

int main() {
    setlocale(LC_ALL, "Russian");

    std::ofstream file("./file.txt", std::ofstream::app);
    // file.open("./file.txt");

    file << "word\n";

    file.close();

    std::ifstream ifile("./file.txt");
    std::string file_text;

    while(getline(ifile, file_text)) {
        std::cout << file_text << std::endl;
    };

    ifile.close();

    return 0;
}