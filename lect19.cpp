// recursion in cpp

#include<iostream>

using namespace std;
int factorial(int n){
    if (n<=1) // base case
    {
       return 1;
    }
    return n * factorial(n-1);
    
}

int main()
{
    cout<<factorial(5); // calling function
    return 0;
}
