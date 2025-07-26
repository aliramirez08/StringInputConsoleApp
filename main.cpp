#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString, concatenated;
    
    std::cout << "This program will concatenate two strings three times with varying lengths.\n\n";
    
    for (int i = 1; i <= 3; ++i) {
        std::cout << "Attempt " << i << ":\n";
        
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);
        
        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);
        
        concatenated = firstString + secondString;
        
        std::cout << "Concatenated result: " << concatenated << "\n\n";
    }
    
    std::cout << "Program finished successfully.\n";
    return 0;
}
