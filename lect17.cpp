/// call by value and call by reference

#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}
// this will not swap a and b
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
// call by reference using pointer
void swappointer(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// using cpp reference variable
void swapreference(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    // cout<<"the sum of 4 and 5 is "<<sum(4,5)<<endl;
    int x = 4 ,y = 5;
    cout << "the value of x is "<<x<<" and value of y is "<<y<<endl;
    // swap(x,y); // this will not swap a and b

    // swappointer(&x,&y); // this will swap x and y using pointer

    
    swapreference(x,y); // this will swap x and y using reference variable
    cout << "the value of x is "<<x<<" and value of y is "<<y<<endl;
    return 0;
}