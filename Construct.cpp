#include <iostream>
#include <string.h>
using namespace std;

class student {
private:
    char name[10], dept[10];
public:
    student(const char* s1, const char* s2) {
        strcpy(name, s1);
        strcpy(dept, s2);
    }
    void display() {
        cout << "Student's name: " << name;
        cout << "\nDepartment: " << dept;
    }
};

int main() {
    char name[10], dept[10];
    cout << "Enter the Students name:";
    cin >> name;
    cout << "\nEnter the students department:";
    cin >> dept;
    
    student ob(name, dept);
    ob.display();

    return 0;
}
