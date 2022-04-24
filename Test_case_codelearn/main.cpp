#include <iostream>
#include "test_case_codelearn.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    // code
    cin >> x >> y;
    cout << "abs(x) = "<<Math::abs(x)<<endl;
    cout << "add(x, y) = "<<Math::add(x, y)<<endl;
    return 0;
}