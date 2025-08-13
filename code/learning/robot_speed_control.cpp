#include <iostream>

int main() {
    double speed;

    std::cout << "Enter the robot's speed (m/s): ";
    std::cin >> speed;
    if (!std::cin) {
        std::cerr << "Error: Please enter a valid number for the speed." << std::endl;
        return 1;
    }

    std::cout << "Setting robot speed to " << speed << " m/s." << std::endl;

    // Code to set robot speed would go here
    
    return 0;
}