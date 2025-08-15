#include <iostream>
#include <set>

int main() {
    // Working with sets to store unique integer landmarks
    std::set<int> unique_landmarks = {10, 20, 30, 20, 40, 30};
    std::cout << "Unique landmarks: ";
    for (const auto& landmark : unique_landmarks) {
        std::cout << landmark << " ";
    }
    std::cout << std::endl;

    // Working with multisets to store duplicate string commands
    std::multiset<std::string> repeated_commands = {"Move", "Rotate", "Scan", "Move", "Grasp"};
    std::cout << "Repeated commands: ";
    for (const auto& command : repeated_commands) {
        std::cout << command << " ";
    }
    std::cout << std::endl;

    return 0;
}