#include <iostream>

using namespace std;

int main () {
    int motor_speed = 100;
    int speed_increment = 20; //Speed adjustment

    int increased_speed = motor_speed + speed_increment; //addition
    int decreased_speed = motor_speed - speed_increment; //subtraction
    int double_speed = motor_speed * 2; //multiplication
    int half_speed = motor_speed / 2; //division
    int remainder = motor_speed % 30; //modulus

    // Output the results
    cout << "Original speed: " << motor_speed << " m/s" << endl;
    cout << "Increased speed: " << increased_speed << " m/s" << endl;
    cout << "Decreased speed: " << decreased_speed << " m/s"  << endl;
    cout << "Doubled speed: " << double_speed << " m/s"  << endl;
    cout << "Halved speed: " << half_speed << " m/s"  << endl; 
    cout << "Remainder: " << remainder << " m/s"  << endl;
    return 0;
}