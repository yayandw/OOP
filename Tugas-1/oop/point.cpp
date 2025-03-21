#include <iostream>
#include <cmath>
using namespace std;

class Point {
    private:
        double x;
        double y;

    public:
        Point() : x(0.0), y(0.0) {}
        double getX() const {
            return x;
        }
        double getY() const {
            return y;
        }
        void setX(double value) {
            x = value;
        }
        void setY(double value) {
            y = value;
        }
        double distanceFromOrigin() const {
            return sqrt(pow(x, 2) + pow(y, 2));
        }
        void display() const {
            cout << "Point(" << x << ", " << y << ")" << endl;
        }
};

int main() {
    Point point;
    point.setX(6.0);
    point.setY(8.0);
    point.display();
    cout << "Distance from origin: " << point.distanceFromOrigin() << endl;
    return 0;
}