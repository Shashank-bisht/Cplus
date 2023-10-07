// pointer to objects and arrow operators

#include <iostream>

using namespace std;

class Complex{
    int real, imaginary;
    public:
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }

    void setdata(int a, int b){
        real = a; 
        imaginary = b;
    }
};
int main(){
    Complex c1;
    // ptr is pointing c1
    Complex *ptr = &c1;
    // or 
    // Complex *ptr = new Complex;

    //  dereferencing using pointer
    // (*ptr).setdata(3,3);
    // (*ptr).getdata();

//or using arrow operator
ptr->setdata(1,2);

// or using normal method 
    // c1.setdata(1,22);
    c1.getdata();




    // array of objects
    Complex *objects = new Complex[2];
    objects->setdata(3,3);
    objects->getdata();
    return 0;
}