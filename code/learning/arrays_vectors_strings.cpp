#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

void function_one() { // Managing arrays for storing and accessing data
    const int size = 5;
    int sensor_readings[size];

    // Initializing the arrow
    for (int i = 0; i < size; i++)
        sensor_readings[i] = i * 10;

    // Accessing array elements
    cout << "Sensor Readings: " << endl;
    for (int i = 0; i < size; i++)
        cout << "Sensor " << i + 1 << ": " << sensor_readings[i]  << endl;
}

void function_two() { // Employing vectors for dynamic and resizeable collections
    vector <int> motor_speeds;

    // Adding elements to the vector
    motor_speeds.push_back(100);
    motor_speeds.push_back(200);
    motor_speeds.push_back(150);

    // Accessing vector elements
    cout << "Motor Speeds: " << endl;
    for (int i = 0; i < motor_speeds.size(); i++) {
        cout << "Motor " << i + 1 << ": " << motor_speeds[i] << endl;
    }
}

void function_three() { // Manipulating strings for text handling
    string robot_name = "kwag1227Bot";

    // Accessing a specific char of the string
    cout << "Robot Name: " << robot_name << endl;
    cout << "First Character: " << robot_name[0] << endl;

    // Modifying the string at a specific index
    robot_name[8] = '-';
    cout << "Modified Robot Name: " << robot_name << endl;

    // Merging two strings into one
    string model = "X100";
    string full_name = robot_name + " " + model;
    cout << "Full Name: " << full_name << endl;
}

void function_four() { // Employing character functions for analyzing & processing characters
    char command = 'f';

    // Checking character properties
    if (islower(command))
        cout << "Command is lowercase" << endl;

    // Converting command to upper case
    char uppercase_command = toupper(command);
    cout << "Uppercase Command: " << uppercase_command << endl;

    // Checking character equality
    if (command == 'f')
        cout << "Command is 'f'" << endl;
}

int main() {
    //function_one();
    //function_two();
    //function_three();
    function_four();

    return 0;
}

