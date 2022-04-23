#include <iostream>

using namespace std;

class sinhvien {
    public:
        string name;
        int age;

        void getInfo() {
            name = "Khanh";
            age = 20;
        }
        void displayInfo() {
            cout << "Name: " << name << endl
                 << "Age: " << age << endl;
        }
    private:
        string name;
        int age;
};
int main(int argc, char const *argv[]) {
 sinhvien sv;
    sv.getInfo();
    sv.displayInfo();
    return 0;
}

