#include <iostream>
using namespace std;

class Rectangle {
    int width;
    int length;
    public:
        Rectangle() : width(0), length(0) {}
        void setWidth(int value) {
            width = value;
        }
        void setLength(int value) {
            length = value;
        }
        int getArea() const {
            return width * length;
        }
};

int main() {
    Rectangle rectangle;
    rectangle.setWidth(10);
    rectangle.setLength(20);
    cout << "getArea: " << rectangle.getArea() << endl;
    return 0;
}