//properties of friend function
//not in the scope of class
//since it is not in the scope of class we cannot call from object
//can be invoked without any objects



#include <iostream>

using namespace std;

class complex{
    int a,b;
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"the number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1,c2;
    c1.setnumber(3,3);
    c1.printnumber();
    c2.setnumber(6,4);
    c2.printnumber();
    return 0;
}