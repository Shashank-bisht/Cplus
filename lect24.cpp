// static variable
//it is initialize by 0 itself
//sirf eak copy variable ki banti hai then it gets updated
//scope is inside class and life is till termination

#include <iostream>

using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id <<" and this is employee number "<<count<< endl;
    }
    static void getcount(void){
        //cout<<id; throws error
        // static mai static he chaliga
        cout<<"the value of count is "<<count<<endl; //count is a static varible
    }
};
// int Employee::count; //default value is 0 or we can change
int Employee::count=9;
int main()
{
    Employee shanky, kalu;
    shanky.setdata();
    shanky.getdata();
    Employee::getcount(); // running without static
    kalu.setdata();
    kalu.getdata();
    Employee::getcount();
    //shanky and kalu both are sharing count
    return 0;
}