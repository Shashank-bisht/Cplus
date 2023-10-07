// public and private access modifier

#include <iostream>
using namespace std;

class Employee
{
private:
int a,b,c;
public:
int d,e;
void setdata(int a,int b,int c); //declaration
void getdata(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
}
};

// using this because it is private

void Employee::setdata(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
Employee shanky;
//shanky.a = 1; //this will throw an error

shanky.d = 1; //this will not throw an error because it is public
shanky.e = 2;
shanky.setdata(1,2,3);
shanky.getdata();
return 0;
}