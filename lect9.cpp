//  if else statement and switch

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age??\n";
    cin >> age;
    // if (age<18)
    // {
    //     cout<<"you are below 18";
    // }else if(age==18){
    //     cout<<"you are 18";
    // }else if(age>18){
    //     cout<<"you are above 18";
    // }

    //
    switch (age)
    {
    case 18:
        cout << "you are 18";
        break;
    case 19:
        cout << "you are coding";
        break;
    case 20:
        cout << "you should not afraid from failures";
        break;
    default:
        cout << "i don't know you";
        break;
    }
    return 0;
}