// constructor overloading
// a class can have multiple constructor

#include<iostream>

using namespace std;

class complex{
    int a,b;
    public:
    complex(int x, int y){
        a = x;
        b = y;
    }
    complex(){
        a = 0;
        b = 0;
    }
    complex(int x){
        a = x;
        b = 0;
    }
    void printnumber(){
    cout<<"your number is "<<a<<" + "<<b<<"i "<<endl;
}
};
int main(){
    // the parameter which will match that will run
    
    complex c1(4,5);
    c1.printnumber();

    complex c2(5);
    c2.printnumber();
    
    complex c3;
    c3.printnumber();
    return 0;
}