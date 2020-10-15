#include <iostream>
#include <fstream>
#include <string>

int main() {

    // 1- Open/Create the file stream
    // 2- While the file is open, you can read/write
    // 3- Close the file in order to keep the changes

    std::ofstream file;
    file.open("C:/Users/Marcel/Programowanie/VSC/FoCP_Lab_2/new_file.txt");
    file << true;

    file.close();   

    // 1- Open the file stream
    // 2- While the file is open, you can read
    // 3- Print the contents of the file
    // 4- Close the file in order to keep the changes
    
    std::ifstream new_file("C:/Users/Marcel/Programowanie/VSC/FoCP_Lab_2/new_file.txt");
    
    if (new_file.is_open()) {
        // 1- Define a variable that will store each line.
        // 2- While there are lines to read, we will read them, and store them in our temporary variable.
        
        std::string line;
        int selected_line = 1;

        int counter = 0;

        while (getline(new_file, line)) {
            if (counter == selected_line){
                std::cout << line << std::endl;;
            }
        }

        new_file.close();

    }   else {
        std::cout << "There was a problem opening the file";
    }

    return 0;
}