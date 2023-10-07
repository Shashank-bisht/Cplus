// using constructor in derived class

#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printdatabase1(void)
    {
        cout << "the value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printdatabase2(void)
    {
        cout << "the value of data is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    // calling base1 and base2 constructor because Derived is derived from base1 and base2
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called" << endl;
    }
    void printdataderived(void)
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    Derived shanky(1, 2, 3, 4);
    shanky.printdatabase1();
    shanky.printdatabase2();
    return 0;
}