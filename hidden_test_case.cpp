#include <iostream>
using namespace std;
class Student
{
public:
    Student(const string &nm, int ag)
        : name(nm), age(ag)
    {
    }
    void dislay()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl;
    }

private:
    string name;
    int age;
};
int main(int argc, char **argv)
{
    string name;
    int age;
    cin >> name >> age;
    Student *s = new Student(name, age);
    s->dislay();
}