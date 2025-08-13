#include <iostream>

int main() {
    int sensor_value = 527;
    double voltage;

    voltage = sensor_value * 5.0 /1023;
    std::cout << "Voltage (implicit casting): " << voltage << " V" << std::endl;

    voltage = (double)sensor_value * 5.0 / 1023;
    std::cout << "Voltage (C-style casting): " << voltage << " V" << std::endl;

    voltage = static_cast<double>(sensor_value) * 5.0 /1023;
    std::cout << "Voltage (C++ style casting): " << voltage << " V" << std::endl;

    return 0;
}