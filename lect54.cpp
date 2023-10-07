// array of objects using pointers

#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout<<"Id of this item is "<<id<<endl;
        cout<<"Price is "<<price<<endl;
    }
};
int main()
{
    int size = 3;
    // here Shop is a custom data type
    // pointing to first Shop object 
    Shop *ptr = new Shop[size];
    Shop *ptritem = ptr;
    int p,q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number "<<i+1<<endl;
        ptritem->getdata();
        ptritem++;
    }
    
    return 0;
}