// function in cpp

#include<iostream>
using namespace std;

// to make sum at ending or after main we use function prototype
void g(){
    cout<<"hi shanky";
}
// type function name(arguments)

int sum(int a, int b);
// or
int sum(int ,int);

// void g();

int main(){
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}
int sum(int a, int b){
    int c = a+b;
    return c;
}
