// in structure data is not hidden and structure is not safe
// inside structure we cannot use function

#include <iostream>
using namespace std;

class Empolyee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // declaration
    void getData()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    };
};

void Empolyee :: setData(int a1,int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Empolyee shanky;
    // shanky.a = 444; // this will throw error
    shanky.d = 44;
    shanky.e = 77;
    shanky.setData(1, 2, 3);
    shanky.getData();
    return 0;
}