#include <iostream>

using namespace std;

int main () {
    // Variable examples
    int distance = 100; // Distance in cm
    float speed = 5.5; // Speed in m/s
    char direction = 'N'; // Direction as a cardinal point
    bool is_active = true; // Status of robot motor

    // Output variable vals to terminal
    cout << "Robot Status: " << endl;
    cout << "Distance: " << distance << " cm" << endl;
    cout << "Speed: " << speed << " m/s" << endl;
    cout << "Direction: " << direction << endl;
    cout << "Motor Active: " << (is_active ? "Yes" : "No") << endl;

    return 0;
}