#include "iostream"
using namespace std;
class MyClass {
public:
    static int x;
    
};
int MyClass::x = 10;
int main(int argc, char **argv)
{
    MyClass m1;
    MyClass m2;
    m1.x = 20;
    cout << m1.x << "  " << m2.x << endl;
    return 0;
}