#include <iostream>

using namespace std;

int main() {
    int robot_positions[] = {0,10,20,30,40};

    for (int i = 0; i < 5; i++)
        cout << "Robot Position: " << robot_positions[i] << endl;
    
    return 0;
}