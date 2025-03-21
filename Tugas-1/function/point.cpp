#include <iostream>
#include <cmath>
using namespace std;

double distanceFromOrigin(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
    double x = 6.0;
    double y = 8.0;
    cout << "Distance from origin: " << distanceFromOrigin(x, y) << endl;
    return 0;
}