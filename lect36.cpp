// parametarize constructor

#include<iostream>
using   namespace std;
class Complex{
    int a, b;
    public:

    Complex(int , int );//constructor declaration

    void printnumber(){
        cout<<a<<" is the number and second number is "<<b<<endl;
    }
};
Complex ::  Complex(int x , int y) // this is a parameterized constructor 
{
    a = x;
    b = y;
}
int main(){
    // implicit call
    // here we are not making object
    Complex a(2,2);
    a.printnumber();

    // Explicit call
    // here we are making object
    Complex b = Complex(4,2);
    b.printnumber();
    return 0;
}