#include <cstdio>

int main () {
    const char* robot_name = "RobotMate";
    float battery_percentage = 75.5f;
    int x_coord = 10;
    int y_coord = 20;

    printf("Robot Name: %s\n", robot_name);
    printf("Battery Level: %.2f%%\n", battery_percentage);
    printf("Robot Position: (%d, %d)\n", x_coord, y_coord);

    printf("Sending command to the robot...\n");

    printf("Command executed successfully!\n");

    return 0;
}