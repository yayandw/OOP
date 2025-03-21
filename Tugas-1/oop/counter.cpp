#include <iostream>
using namespace std;

class Counter {
    int increment;
    public:
        int getCurrent() const {
            return increment;
        }
        void increase() {
            increment++;
        }
};

int main() {
    Counter counter;
    counter.increase();
    cout << "counter: " << counter.getCurrent() << endl;
    counter.increase();
    cout << "counter: " << counter.getCurrent() << endl;
    counter.increase();
    cout << "counter: " << counter.getCurrent() << endl;
    return 0;
}