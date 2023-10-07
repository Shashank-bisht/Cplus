// input and output in cpp

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the value of first number\n"; // << is the insertion operator
    cin >> num1;                                 // >> is called extraction operators

    cout << "Enter the value of second number\n"; // << is the insertion operator
    cin >> num2;                                  // >> is called extraction operators

    cout << "the sum is " << num1 + num2;
    
    return 0;
}