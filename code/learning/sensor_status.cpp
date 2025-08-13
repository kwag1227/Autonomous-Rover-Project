#include <iostream>

using namespace std;

bool sensor_triggered = false;

void check_sensor() {
    // Simulate sensor being triggered
    sensor_triggered = true;
}

int main() {
    cout << "Sensor initially triggered: " << (sensor_triggered ? "Yes" : "No") << endl;
    check_sensor();
    cout << "Sensor status after checking: " << (sensor_triggered ? "Yes" : "No") << endl;

    return 0;
}