// pointer and array

#include<iostream>

using namespace std;

int main()
{
    int marks[] = {1,2,3,4,5};
    int *p = marks;
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    cout<<"the value of marks[4] is "<<*(p+4)<<endl;
    return 0;
}
