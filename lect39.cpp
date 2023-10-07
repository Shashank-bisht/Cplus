// inheritance 

#include<iostream>
using namespace std;

// base class or superclass
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpid){
        id = inpid;
        salary = 34;
    }
    Employee(){} // constructor
};

// derived class or subclass syntax
// class  <derived_class_name> : <access-specifier> <base_class_name>
// {
        //body
// }


// default access-specifier is private
// private members are never inherited
// creating a programmer class derived from Employee base class

// remove public and you cannnot access id

class programmer : public Employee {
    public:
    programmer(int inpid){
        id = inpid;
    }
    int langcode = 5;
    void getdata(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee shanky(1), shan(3);
    cout << shanky.salary << endl;
    cout << shanky.salary <<endl;

    programmer shashank(3);
    cout << shashank.langcode <<endl;
    cout << shashank.id <<endl;
    shashank.getdata();
  return 0;
}