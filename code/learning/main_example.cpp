#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "Welcome to Robotics Bootcamp!" << std::endl;

    // Print the command line arguments
    std::cout << "Arguments passed to the program:" << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << i << ": " << argv[i] << std::endl;
    }

    return 0;
}