// operators in cpp

#include <iostream>
using namespace std;
int main()
{
    int a=5;
    cout<<"value of a++ is "<<a++<<"\n";
    // first print value of a and then increase the value of a
    cout<<"value of a now is "<<a;
    cout<<"\nvalue of a-- is "<<a--;
    // first print value of a and then decrease the value of a
    cout<<"\nvalue of a now is "<<a;
    // endl is same as \n
    cout<<"\noperators in cpp "<<endl<<"hello\n";

// and and or operator 
// 1 is true and 0 is false
    int x=5,y=6;
    cout<<((x>=y)||(x<=y))<<"\n";
    cout<<((x<=y)&&(x>=y));
    return 0;
}