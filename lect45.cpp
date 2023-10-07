#include <iostream>
using namespace std;

// destructor never takes an argument nor returns any value
int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time when constructor is called"<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when destructor is called"<<count<<endl;
        count --;
    }
};

int main(){
    cout<<"we are inside our main "<<endl;
    cout << "Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more object"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}