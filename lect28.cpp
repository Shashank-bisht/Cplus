// constructor 
// constructor is a special member function with the same name as of the class . it is automatically invoked whenever an object is created
// it is used to initialize the objects of its class
#include<iostream>
using namespace std;

class complex{
int a,b;
public:
complex(void);//constructor declaration
void printnumber(){
    cout<<"your number is "<<a<<" + "<<b<<"i "<<endl;
}
};
//define
complex:: complex(void){ //this is a default constructor as it takes no parameter
    a = 10;
    b = 0;
    cout<<"hello this is shanky"<<endl;
}
int main (){
    complex c,b;
    c.printnumber();
    b.printnumber();
    return 0;
}

//properties of constructor
// it should be declared in the public section of the class
// they cannot return values and do not have return type
