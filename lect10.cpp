// for,while and do-while

#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i <= 8; i++)
    // {
    //     cout<<i<<endl;
    // }

    // while loop
    // int i = 4;
    // while (i<=66)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    int j = 3;
    int i = 1;
    do
    {
        cout<<j<<" X "<<i<< " = "<<j*i<<endl;
        i++;
    } while (i<=10);
    return 0;
}