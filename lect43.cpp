// multiple inheritance
// Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes

#include<iostream>

using namespace std;

class Base1{
protected:
int base1int ;
public:
void set_base1int(int a){
    base1int = a;
}
};

class Base2{
protected:
int base2int ;
public:
void set_base2int(int a){
    base2int = a;
}
};

class derived : public Base1,public Base2{
public:
void show(){
    cout<<"the value of base1 is "<<base1int<<" and the value of base2 is "<<base2int<<endl;
}
};

int main(){
    derived shanky;
    shanky.set_base1int(10);
    shanky.set_base2int(1);
    shanky.show();
    return 0;
}