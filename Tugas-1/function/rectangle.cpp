#include <iostream>
using namespace std;

int getArea(int width, int length) {
    return width * length;
}

int main() {
    int width = 10;
    int length = 20;
    cout << "getArea: " << getArea(width, length) << endl;
    return 0;
}