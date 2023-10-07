// parameterized constructor

#include<iostream>
using namespace std;

class complex{
int a,b;
public:
complex(int , int);//constructor declaration
void printnumber(){
    cout<<"your number is "<<a<<" + "<<b<<"i "<<endl;
}
};
complex:: complex(int x, int y){ //this is a parameterized constructor as it takes two parameter
    a = x;
    b = y;
    cout<<"hello this is shanky"<<endl;
}
int main(){
    //implicit call
    complex a(4,6);
    a.printnumber();
    //explicit call
    complex b = complex(3,4);
    b.printnumber();
    return 0;
}