// single level inheritance

#include <iostream>

using namespace std;

class base
{
    int data1; // it is bydefault private
public:
    int data2;
    void setData1();
    int getData1();
    int getData2();
};

// using scope resolution operator - Defining a function outside a class.

void base::setData1(void)
{
    data1 = 10;
    data2 = 55;
}

int base::getData1()
{
    return data1;
}

int base::getData2()
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};

void derived::process()
{
    data3 = data2 * getData1(); // using getData1 because data1 is private
};

void derived::display()
{
    cout << "value of data1 is " << getData1() << endl;
    cout << "value of data2 is " << data2 << endl;
    cout << "value of data3 is " << data3 << endl;
};

int main()
{
    // creating object
    derived d;
    d.setData1();
    d.process();
    d.display();
    return 0;
}