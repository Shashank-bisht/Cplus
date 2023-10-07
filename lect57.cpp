// virtual function 

#include <iostream>
using namespace std;

class baseclass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "display base class variable var_base " << var_base << endl;
    }
};

class derived_class : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;
        cout << "displaying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    baseclass *basepointer;
    baseclass obj_base;
    derived_class obj_derived;
    basepointer = &obj_derived;
    basepointer->display();
    return 0;
}