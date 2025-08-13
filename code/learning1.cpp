
#include <iostream>

/*
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
*/

int main () {

    double speed = 0.5; //robot speed
    double time = 10.0; //robot time traveled

    // Calculate the distance traveled
    double distance = speed * time;

    //print result
    std::cout << "The robot traveled " << distance << " meters." << std::endl;

    return 0;
}