// reference variable and typecasting 

#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    float var = 444;
    float & y = var;
    cout<<var<<endl;
    cout<<y<<endl;

    float a = 4.77;
    cout<<"the value of a is "<<(int)a<<"\n";
    cout<<"the value of a is "<<int(a)<<endl;
    cout<<"the type of a is "<<typeid(a).name()<<endl;

    int b = 55;
    cout<<"the value of b is "<<float(b)<<endl;
    cout<<"the type of b is "<<typeid(b).name();
    return 0;
}