// pointer recap and new keyword

#include <iostream>
using namespace std;

int main(){

    int a = 4;
    int* ptr = &a;

    cout<<"the value of a is "<<*(ptr)<<endl;

// The new operator is an operator which denotes a request for memory allocation on the Heap

    // new keyword
    int *p = new int(444);
    cout<<"the value at address p is "<<*(p)<<endl;

    int *arr = new int[3];
    arr[0] = 1;
    *(arr+1) = 12;
    arr[2] = 11;

    // It de-allocates the memory dynamically
    // delete arr;
    // to delete whole array
    delete[] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;

    //delete operator

    return 0;
}