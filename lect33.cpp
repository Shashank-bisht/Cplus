// friend function

#include<iostream>

using namespace std;
//forward declaration
class complex;
class calculate{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumrealcomplex(complex , complex ){
    };
};
class complex{
    int a,b;
    friend int calculate :: sumrealcomplex(complex , complex );
public:
void setnumber(int n1, int n2){
    a = n1;
    b = n2;
}
void printnumber(){
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}
};
int calculate :: sumrealcomplex(complex o1, complex o2){
        return (o1.a + o2.a);
}
int main()
{
    complex o1,o2;
    o1.setnumber(3,3);
    o2.setnumber(2,3);
    calculate cal;
    int res = cal.sumrealcomplex(o1,o2);
    cout<<res<<endl;
    return 0;
}
