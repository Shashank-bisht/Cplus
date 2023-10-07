// structure in cpp used for combining more than one items of different types

// All members store some value at any point in time.

#include<iostream>

using namespace std;

struct employee
{
    int id;
    char favchar;
    float salary;
};


// union help is memory management
// Exactly one member stores a value at any particular instance.
union money
{
   int rice;
   char car;
   float dolor;
};

int main(){ 
    // creating variable harry
    struct employee harry;
    // initalizing the value 
    harry.id = 55;
    harry.favchar = 's';
    harry.salary = 55;

    cout<<harry.id<<endl;


    union money m1;
    m1.rice = 33;
    m1.car = 'e';
    cout<<m1.rice<<endl;
    // in union we can use only one at a time 
    // cout<<m1.car<<endl;


// enumeration is a data type consisting of named values like elements, members, etc., that represent integral constants
    enum Meal{breakfast,lunch,dinner};
    
    // Meal is a data type
    Meal m2 = breakfast;
    cout<<m2<<endl; 
    cout<<breakfast<<endl;
    cout<<lunch<<endl; 
    cout<<dinner<<endl; 
    return 0; 
}