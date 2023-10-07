// multi level inheritance

// protected members - it is like private which can be inherited
#include <iostream>

using namespace std;
class Base
{
protected:
    int a;
private:
    int b;
};

// for a protected member


class derived : protected Base
{

};

int main()
{
Base b;
derived d;
// cout <<b.a<<endl; // will not run since a is protected in both base and derived class
    return 0;
}