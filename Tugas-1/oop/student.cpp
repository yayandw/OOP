#include <iostream>
using namespace std;

class Student {
    int id;
    string name;
    string grade;
    public:
    Student() : id(0), name(""), grade("") {}
        void setId(int value) {
            id = value;
        }
        void setName(string value) {
            name = value;
        }
        void setGrade(string value) {
            grade = value;
        }
        string dispay() const {
            return "{\"id\":" + to_string(id)  + ",\"name\":\"" + name + "\",\"grade\":\"" + grade +"\"}";
        }
};

int main() {
    Student student;
    student.setId(1);
    student.setName("Yayan");
    student.setGrade("SMK");
    cout << student.dispay() << endl;
    return 0;
}