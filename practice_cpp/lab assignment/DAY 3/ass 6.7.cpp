#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(string name, int age) : name(name), age(age) {}
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
private:
    string student_id;
    double gpa;
public:
    Student(string name, int age, string student_id, double gpa) : Person(name, age), student_id(student_id), gpa(gpa) {}
    void display() {
        Person::display();
        cout << "Student ID: " << student_id << endl;
        cout << "GPA: " << gpa << endl;
    }
};
int main() {
    Person person("Dinesh", 21);
    Student student("Ganesh", 19, "101", 7.74);
    cout << "Person:" << endl;
    person.display();
    cout << endl;
    cout << "Student:" << endl;
    student.display();
    return 0;
}

