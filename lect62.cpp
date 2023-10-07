// template in cpp
// A template is a simple yet very powerful tool in C++

#include<iostream>
using namespace std;

class vector{
int * arr;
int size;
public:
vector(int m){
    size = m;
    arr = new int[size];
}
int dotproduct(vector &v){
int d = 0;
for (int i = 0; i < size; i++)
{
   d+= this->arr[i] * arr[i];
   return d;
}

}
};

int main(){
    return 0;
}