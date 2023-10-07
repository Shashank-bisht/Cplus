// Initialization list in Constructors in Cpp

#include<iostream>
using namespace std;

// syntax for initialization
// constructor(argument-list): initialization-section

class test{
    int a;
    int b;
    public:
    // test(int i, int j) : a(i), b(j) 
    // test(int i, int j) : a(i), b(i+j) 
    // test(int i, int j) : a(i), b(9+j) 
    // test(int i, int j) : a(i), b(a+j) 
    test(int i, int j) :  b(j), a(i+b) //since a is initialized first so it will give garbage value
    {
        // initialization and declaration should be in same order 
        
        // normal syntax
        // a = i;
        // b = j;
        cout<<"constructor executed"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};

int main(){
test t(4,3);
    return 0;
}