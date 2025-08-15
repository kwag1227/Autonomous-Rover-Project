#include <iostream>
#include <deque>
#include <list>
#include <forward_list>

int main() {

    // Working with deques
    std::deque<int> robot_positions = {10, 20, 30};
    robot_positions.push_front(5);
    robot_positions.push_back(40);
    std::cout << "Deque: ";
    for (const auto& pos : robot_positions) {
        std::cout << pos << " ";
    }
    std::cout << std::endl;

    // Working with lists
    std::list<std::string> robot_actions = {"move", "rotate", "scan"};
    robot_actions.push_back("grasp");
    robot_actions.push_back("initialize");

    std::cout << "List: ";
    for (const auto& action: robot_actions) {
        std::cout << action << " ";
    }
    std::cout << std::endl;

    // Working with forward lists
    std::forward_list<double> sensor_readings = {1.5, 2.7, 3.2};
    sensor_readings.push_front(0.8);
    std::cout << "Forward List: ";
    for (const auto& reading : sensor_readings) {
        std::cout << reading << " ";
    }
    std::cout << std::endl;

    return 0;
}