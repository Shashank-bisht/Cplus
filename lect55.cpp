// this is a keyword which is a pointer which points to the object which invokes the member function

#include<iostream>

using namespace std;

class A{
    int a;
    public:
    void setdata(int a){
       this-> a = a;
    }
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
    }
};
int main(){
    A a;
    a.setdata(5);
    a.getdata();
    return 0;
}