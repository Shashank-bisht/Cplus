// friend function

#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomp(complex o1, complex o2);

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
// sumcomp cannot access private data of complex

complex sumcomp(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
};
int main()
{
    complex c1, c2, sum;
    c1.setnumber(4, 3);
    c1.printnumber();
    c2.setnumber(4, 5);
    c2.printnumber();

    sum = sumcomp(c1, c2);
    sum.printnumber();

    return 0;
}

// properties of friend function
//  not in the scope of class
//  it cannot be called from the object of that class
//  it cannot access the members directly by there names and need object_name.member_name
