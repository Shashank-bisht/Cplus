// pointers is a data type which holds the address of other data type

#include<iostream>
using namespace std;

int main(){
float c = 8.8;
float *b = &c;
cout<<"address of c is "<<&c<<endl;
cout<<"address of c is "<<b<<endl;

// derference operator = to get the value
cout<<*b<<endl;

// pointer to pointer variable means esa pointer which stores other pointer address
float **d = &b;
cout<<"address of b is "<<d<<endl;
cout<<"address of d is "<<&d<<endl;
    return 0;
}