// function overloading

// Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters.

#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"using function with two argument"<<endl;
    return a+b;
}
int add(int a, int b, int c){
    cout<<"using function with three argument"<<endl;
    return a+b+c;
}
int main()
{
    cout<<"the sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"the sum of 3, 6 and 3 is "<<add(3,6,3)<<endl;
    return 0;
}
