#include <iostream>
using namespace std;

class Calculator {
    int x;
    int y;
    public:
        Calculator() : x(0), y(0) {}
        void setX(int value) {
            x = value;
        }
        int getX() const {
            return x;
        }
        void setY(int value) {
            y = value;
        }
        int getY() const {
            return y;
        }
        int addition() const {
            return x + y;
        }
        int subtraction() const {
            return x - y;
        }
        int multiplication() const {
            return x * y;
        }
        int division() const {
            return x / y;
        }
};

int main() {
    Calculator calc;
    calc.setX(10);
    calc.setY(3);
    cout << "Calculator, input X: " << calc.getX() << ", input Y: " << calc.getY() << endl;
    cout << "addition: " << calc.addition() << endl;
    cout << "subtraction: " << calc.subtraction() << endl;
    cout << "multiplication: " << calc.multiplication() << endl;
    cout << "division: " << calc.division() << endl;
    return 0;
}