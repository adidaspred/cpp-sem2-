#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string name) : name(name) {}

    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    string course;
    int marks;
    int year;

public:
    Student(string name, string course, int marks, int year) : Person(name), course(course), marks(marks), year(year) {}

    void display() override {
        Person::display();
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Employee : public Person {
private:
    string department;
    double salary;

public:
    Employee(string name, string department, double salary) : Person(name), department(department), salary(salary) {}

    void display() override {
        Person::display();
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Runtime polymorphism demonstration
void displayInfo(Person* entity) {
    entity->display();
}

int main() {
    Student student("John", "Computer Science", 90, 2023);
    Employee employee("Alice", "Human Resources", 50000);

    displayInfo(&student);
    cout << endl;
    displayInfo(&employee);

    return 0;
}
