#include <iostream>
using namespace std;

int addition(int x, int y) {
    return x + y;
}

int subtraction(int x, int y) {
    return x - y;
}

int multiplication(int x, int y) {
    return x * y;
}

int division(int x, int y) {
    return x / y;
}

int main() {
    int x = 10;
    int y = 3;
    cout << "Calculator, input X: " << x << ", input Y: " << y << endl;
    cout << "addition: " << addition(x, y) << endl;
    cout << "subtraction: " << subtraction(x, y) << endl;
    cout << "multiplication: " << multiplication(x, y) << endl;
    cout << "division: " << division(x, y) << endl;
    return 0;
}