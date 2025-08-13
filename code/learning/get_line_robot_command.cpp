#include <iostream>
#include <string>

using namespace std;

int main() {
    string command;
    cout << "Enter robot command: ";
    getline(cin, command);

    cout << "Command recieved: " << command << endl;

    return 0;
}