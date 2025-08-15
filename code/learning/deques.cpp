#include <iostream>
#include <deque>

int main() {
    std::deque<float> sensor_data;

    // Simulalting stream of sensor data by appending values to sensor_data deque
    sensor_data.push_back(2.5);
    sensor_data.push_back(3.1);
    sensor_data.push_back(4.7);
    
    std::cout << "Processing sensor reading: " << sensor_data.front() << std::endl;
    sensor_data.pop_front();

    // Adding more readings to back
    sensor_data.push_back(5.5);
    sensor_data.push_back(6.8);

    std::cout << "Processing sensor reading: " << sensor_data.front() << std::endl;
    sensor_data.pop_front();

    std::cout << "Remaining sensor data:";
    for (float reading: sensor_data){
        std::cout << ' ' << reading;
    }
    std::cout << std::endl;

    return 0;
}