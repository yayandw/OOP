#include <iostream>
using namespace std;

string dispay(int id, string name, string grade) {
    return "{\"id\":" + to_string(id)  + ",\"name\":\"" + name + "\",\"grade\":\"" + grade +"\"}";
}

int main() {
    cout << dispay(1, "John", "S1") << endl;
    return 0;
}