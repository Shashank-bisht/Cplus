// polmorphism - one name many form
// type of polmorphism :-

// 1 .Compile-time Polymorphism.
// Compile-time Polymorphism can be achieved through operator overloading and function overloading 

// 2 .Runtime Polymorphism.
// Runtime Polymorphism can be achieved through virtual function and Function Overriding

#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"display base class variable var_base "<<var_base<<endl;
    }

};

class derived_class : public baseclass{
public:
int var_derived;
void display(){
    cout<<"displaying base class variable var_base "<<var_base<<endl;
    cout<<"displaying derived class variable var_derived "<<var_derived<<endl;
}
};

int main(){
baseclass * basepointer;
baseclass obj_base;
baseclass obj_derived;
// base class pointer pointing to derived class
basepointer = &obj_derived;

basepointer ->var_base = 55;
//basepointer->var_derived =44; // it will not run because it is not in base class

basepointer->display();
// it will run base class display because pointer is of base class

    return 0;
}