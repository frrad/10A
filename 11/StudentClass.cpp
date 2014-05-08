#include <iostream>

using namespace std;

class Student {
  public:
    Student(string n, int a);
    void setAge(const int a);
    int getAge() const;
    string getName() const;

  private:
    string name;
    int age;
    double gpa;
};

Student::Student(string n, int a) {
    name = n;
    age = a;
}

void Student::setAge(const int a) { age = a; }
int Student::getAge() const { return age; }
string Student::getName() const { return name; }

int main() {
    Student firstStudent("John Smith", 25);
    cout << firstStudent.getName() << " is " << firstStudent.getAge()
         << " years old." << endl;

    return 0;
}
