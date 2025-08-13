#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main () {
    stringstream ss;
    int motor_speed = 150;
    double battery_level = 12.5;

    ss << "Motor Speed: " << motor_speed << " RPM, Battery Level: " << battery_level << " V" << endl;

    string log_entry = ss.str();
    cout << "Log Entry:\n" << log_entry << endl;

    return 0;
}