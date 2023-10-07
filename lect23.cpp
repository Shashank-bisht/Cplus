#include <iostream>

using namespace std;

class Shop
{
    int item[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; };
    void setprice(void);
    void displayprice(void);
};
void Shop ::setprice(void)
{
    int n;
    cout<<"Enter the no. of items you have"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter id of your item no." << counter + 1 << endl;
        cin >> item[counter];
        cout << "Enter price of your item" << endl;
        cin >> itemPrice[counter];
        counter++;
    }
    

    // cout<<"Enter id of your item no."<<counter+1<<endl;
    // cin>>item[counter];
    // cout<<"Enter price of your item"<<endl;
    // cin>>itemPrice[counter];
    // counter++;
}
void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << item[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.displayprice();
    // dukan.setprice();
    return 0;
}