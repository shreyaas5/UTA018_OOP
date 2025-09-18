#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    public:
        Student() {
            name = "Unknown";
            age = 0;
        }
        Student(string name1, int age1) {
            name = name1;
            age = age1;
        }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    ~Student() {
        cout << "Destructor called for: " << name << endl;
    }
};

int main() {
    Student s1;                
    Student s2("Aayush", 19);  
    s1.display();
    s2.display();
    return 0;
}
