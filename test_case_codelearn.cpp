#include "iostream"
using namespace std;
class test_case_codelearn
{
private:
    /* data */
public:
    int * arr;
    int n;
    ~test_case_codelearn(){
        cout << "Destructor called" << endl;
        delete [] arr;
    }
    // test_case_codelearn(/* args */);
    // ~test_case_codelearn();
};
void someFunction1(){
    test_case_codelearn a;
    a.n = 5;
    a.arr = new int[a.n];
    // some code
    
}
void someFunction2(){
    test_case_codelearn a;
    a.n = 5;
    a.arr = new int[a.n];
    // some code
   
}

// test_case_codelearn::test_case_codelearn(/* args */)
// {
// }

// test_case_codelearn::~test_case_codelearn()
// {
// }

int main(int argc, char **argv)
{
    someFunction1();
    someFunction2();
    return 0;
}