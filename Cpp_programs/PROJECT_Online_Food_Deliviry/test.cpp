#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("menu_file.txt");
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.find("ID : 202") != std::string::npos) {
            // Found the line containing ID 201, print it
            std::cout << line << std::endl;
            // Read and print the next lines until a line break
            while (std::getline(file, line) && line.size()!=0) {
                std::cout << line << std::endl;
            }
            break; // Exit the loop after printing the required section
        }
    }

    file.close();
    return 0;
}
