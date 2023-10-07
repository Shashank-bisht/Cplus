// array and pointers

#include<iostream>
using namespace std;

int main(){
    int marks[] = {1,2,3};
    marks[2] = 444;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < sizeof(marks)/sizeof(marks[0]); i++)
    // {
    //     cout<<marks[i]<<endl;
    // }


    int i = 0;
    while (i<3)
    {
        cout<<marks[i]<<endl;
        i++;
    }
    
    return 0;
}