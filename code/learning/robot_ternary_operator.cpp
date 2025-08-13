#include <iostream>

using namespace std;

int main() {
    int battery_level = 75;
    int battery_threshold = 20;

    string battery_status = (battery_level > battery_threshold) ? "Sufficient" : "Low";
    cout << "Battery Status: " << battery_status << endl;

    int distance_to_obstacle = 30;
    int safety_distance = 50;

    string action = (distance_to_obstacle < safety_distance) ? "Stop" : "Continue";
    cout << "Action: " << action << endl;

    return 0;
}