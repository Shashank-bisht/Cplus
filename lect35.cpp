// constructor and destructor in cpp
// constructor is a special member function with same name as of the class it is automatically invoked when the objects is created
// it is used to initialize the objects of the class
// name of constructor should be same as the name of the class

// Constructor does not have a return value, hence they do not have a return type.


#include<iostream>
using   namespace std;
class Complex{
    int a, b;
    public:

    Complex(void);//constructor declaration

    void printnumber(){
        cout<<a<<" is the number and second number is "<<b<<endl;
    }
};
Complex ::  Complex(void) // this is a default constructor as it takes no arguments
{
    a = 10;
    b = 20;
}
int main(){
    Complex c;
    c.printnumber();
    return 0;
}