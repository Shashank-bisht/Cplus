// adding equation using class

#include<iostream>
using namespace std;

class equation{
    int a;
    int b;

    public:
    void setdata(int v1, int v2) { a = v1; b = v2; }

    void setdatabysum(equation o1, equation o2) { a = o1.a+o2.a; b = o1.b+o2.b; }

    void printeq(){
        cout<<"your eqation is "<<a<<"x +"<<b<<"y"<<endl;
    }
};

int main(){
    equation e1,e2,e3;
    e1.setdata(1,2);
    e1.printeq();

    e2.setdata(3,4);
    e2.printeq();

    e3.setdatabysum(e1,e2);
    e3.printeq();
    return 0;
}