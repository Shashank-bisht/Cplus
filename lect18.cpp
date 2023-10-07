// inline function improve the speed of the program
// default arguments like(factor) we should always write default arguments at last
//constant arguments const int a=3 are arguments which should not be changed

#include<iostream>
using namespace std;

float moneyrecieve(int currentmoney, float factor=1.04){  //assigning default values
    return currentmoney*factor;
}

int main(){
    int money = 100000;
     cout<<"if you have "<<money<<"rs in your bank you will recieve "<<moneyrecieve(money)<<"rs after one year"<<endl;
     cout<<"if you have "<<money<<"rs in your bank you will recieve "<<moneyrecieve(money,1.1)<<"rs after one year"<<endl;
    return 0;
}