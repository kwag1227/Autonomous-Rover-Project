#include <iostream>
#include <vector>

int main() {
    std::vector<int> sensor_data = {10, 20, 30, 40, 50};

    // iterating through the sensor data
    // 'auto' allows compiler to automatically detect
    // data type of sensor data values
    for (auto it = sensor_data.begin(); it != sensor_data.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Modifying the sensor data
    for (auto it = sensor_data.begin(); it != sensor_data.end(); it++) {
        *it *= 2;
    }

    // Iterating through modified sensor data and 
    // printing values
    // 'auto&' means that "value" is a pointer,
    // not a copy of the sensor values like
    // "it" from above
    for (const auto& value : sensor_data) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}