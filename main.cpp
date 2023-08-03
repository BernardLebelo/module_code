#include <iostream>

namespace std {
    // Function to find the highest mark from an array of marks
    int findHighestMark(int marks[], int size) {
        int highestMark = marks[0]; // Assume the first mark is the highest initially

        // Loop through the array to find the actual highest mark
        for (int i = 1; i < size; i++) {
            if (marks[i] > highestMark) {
                highestMark = marks[i];
            }
        }

        return highestMark;
    }
}

int main() {
    const int MAX_MODULES = 8; // Maximum number of modules a student can register per year

    int numModules; // Variable to store the number of registered modules
    int marks[MAX_MODULES]; // Array to store marks, with a size of MAX_MODULES

    // Prompt user to enter the number of registered modules
    std::cout << "Enter the number of registered modules (max " << MAX_MODULES << "): ";
    std::cin >> numModules;

    // Check if the number of registered modules is within the allowed range
    if (numModules <= 0 || numModules > MAX_MODULES) {
        std::cout << "Invalid number of registered modules. Please enter a number between 1 and " << MAX_MODULES << ".\n";
        return 1; // Exit the program with an error code
    }

    // Prompt user to enter the marks for each module
    std::cout << "Enter the marks for each module:\n";
    for (int i = 0; i < numModules; i++) {
        std::cout << "Module " << i + 1 << ": ";
        std::cin >> marks[i];
    }

    // Find and display the highest mark
    int highestMark = std::findHighestMark(marks, numModules);
    std::cout << "The highest mark is: " << highestMark << "\n";

    return 0;
}
