#include <iostream>
#include <string>

int main() {
    int encoder_ticks = 720;

    double battery_voltage = 12.7;

    char motor_direction = 'F';

    bool is_sensor_active = true;

    std::string robot_name = "kwag1227Bot";

    std::cout << "Encoder Ticks: " << encoder_ticks << std::endl;
    std::cout << "Battery Voltage: " << battery_voltage << std::endl;
    std::cout << "Motor Direction: " << motor_direction << std::endl;
    std::cout << "Sensor Active: " << (is_sensor_active ? "Yes" : "No") << std::endl;
    std::cout << "Robot Name: " << robot_name << std::endl;

}