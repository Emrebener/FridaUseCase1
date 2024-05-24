#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string Add(int a, int b) {
    ostringstream oss;
    oss << a << " + " << b << " = " << (a + b);
    return oss.str();
}

string Subtract(int a, int b) {
    ostringstream oss;
    oss << a << " - " << b << " = " << (a - b);
    return oss.str();
}

string Multiply(int a, int b) {
    ostringstream oss;
    oss << a << " * " << b << " = " << (a * b);
    return oss.str();
}

string Divide(int a, int b) {
    if (b == 0) return "Error: Division by zero.";
    ostringstream oss;
    oss << a << " / " << b << " = " << (a / b);
    return oss.str();
}

int main() {
    cout << "Emre Bener" << endl;
    cout << "TYZM-621-01 \n" << endl;

    while (true) {
        cout << "Enter command (add, sub, mul, div) followed by two numbers, or type 'exit' to quit:" << endl;
        string input;
        getline(cin, input);

        if (input == "exit") {
            break;
        }

        istringstream iss(input);
        string command;
        int num1, num2;

        if (!(iss >> command >> num1 >> num2)) {
            cout << "Invalid input. Please enter a command followed by two numbers." << endl;
            continue;
        }

        command = tolower(command[0]);
        if (command == "a") {
            cout << Add(num1, num2) << endl;
        }
        else if (command == "s") {
            cout << Subtract(num1, num2) << endl;
        }
        else if (command == "m") {
            cout << Multiply(num1, num2) << endl;
        }
        else if (command == "d") {
            cout << Divide(num1, num2) << endl;
        }
        else {
            cout << "Unknown command. Please use add, sub, mul, or div." << endl;
        }
    }

    return 0;
}
