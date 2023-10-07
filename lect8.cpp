#include<iostream>
#include<iomanip>
// iomanip is a library that is used to manipulate the output of C++ program.
using namespace std;

int main(){
    // const int a = 6;
    // cout<<"the value of a is "<<a;
    // int a =5;
    // cout<<"the value of a is "<<a;


// setw
int a=5,b=655,c=7;
cout<<"the value of a with setw"<<setw(5)<<a<<endl;
cout<<"the value of b with setw"<<setw(4)<<b<<endl;
cout<<"the value of c with setw"<<setw(5)<<c<<endl;

cout<<"the value of a without setw"<<a<<endl;
cout<<"the value of b without setw"<<b<<endl;
cout<<"the value of c without setw"<<c<<endl;
return 0;
}