#include<iostream>

using namespace std;

class bankdeposit{
    int principal;
    int years;
    float rate;
    float returnvalue;

    public:
    // making constructor
    bankdeposit(){}
    bankdeposit(int p,int y, float r); //r can be like .04
    bankdeposit(int p,int y,int r); // r can be like 14
    void show();
};

bankdeposit::bankdeposit(int p,int y, float r){
    principal = p;
    years = y;
    rate = r;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
       returnvalue *=(1+r);
    }
    
}
bankdeposit::bankdeposit(int p,int y, int r){
    principal = p;
    years = y;
    rate = float(r)/100;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
       returnvalue *=(1+r);
    }
    
}
void bankdeposit:: show(){
    cout<<endl<<"principal amount was "<<principal<<endl<<"returnvalue after"<<years<<" years is "<<returnvalue<<endl;
}
int main(){
    bankdeposit obj;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    obj = bankdeposit(p,y,r);
    obj.show();
    cout<<endl;
    return 0;
}