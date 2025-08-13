#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

// Using mathematical functions for robotics calculations
void function_one() {
    double angle = 45.0;
    double radians = angle * M_PI / 180.0;

    double sine = sin(radians);
    double cosine = cos(radians);

    cout << "Sine: " << sine << endl;
    cout << "Cosine: " << cosine << endl;
}

// Implementing functions for code modularity

// Function definition
double calculate_distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx * dx + dy * dy);
    
    return distance;
}

// Handling pointers to access and manipulate memory
void function_three() {
    int robot_id = 42;
    int* ptr = &robot_id;

    cout << "Robot ID: " << robot_id << endl;
    cout << "Pointer Value: " << ptr << endl;
    cout << "Dereferenced Pointer: " << *ptr << endl;

    *ptr = 99;
    cout << "Updated Robot ID: " << robot_id << endl;
    // Basically telling program to go to the address of robot_id
    // then update the value to 99
    // without the asterisk, you essentially tell the program
    // to store 99 as the address of robot_id, rather than the value
}

// Managing exceptions for robust error handling
double divide(double a, double b) {
    if (b==0)
        throw runtime_error("Division by zero");
    return a / b;
}

int main() {
    //function_one();
    // double distance = calculate_distance(0, 0, 3, 4);
    // cout << "Distance: " << distance << endl;
    // function_three();

    try {
        double result = divide(10, 0);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}