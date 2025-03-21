#include <iostream>
using namespace std;

void increase(int& increment) {
    increment++;
}

int main() {
    int increment = 0;
    increase(increment);
    cout << "counter: " << increment << endl;
    increase(increment);
    cout << "counter: " << increment << endl;
    increase(increment);
    cout << "counter: " << increment << endl;
    return 0;
}