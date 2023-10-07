// ambiguous solving
// if a class is derived from two classes which class property it will inherit

#include<iostream>

using namespace std;
class base1{
    public:
    void greet(){
        cout<<"Hello"<<endl;
    }
};

class base2{
    public:
    void greet(){
        cout<<"kem cho"<<endl;
    }
};

class derived : public base1, public base2{
    int a;
    // resolaving ambiguity
    public:
    void greet(){
        base2::greet();
    }
};
int main (){
// ambiguity 1
base1 base1obj;
base2 base2obj;

base1obj.greet();

derived d;
//d.greet(); // because greet to dono mai hai
d.greet(); 
return 0;
}