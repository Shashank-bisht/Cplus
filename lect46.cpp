// virtual base class 

#include <iostream>
using namespace std;


class Student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<"your roll no is "<<roll_no<<endl;
    }
};

// set_number to do class mai gaya hai Test and sports

class Test : virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }

    void print_marks(void){
        cout<<"your maths marks is "<<maths<<endl;
        cout<<"your physics marks is "<<physics<<endl;
    }
};

class sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout <<"your pt score is "<<score<<endl;
    }
};

class result : public Test,public sports{
    private:
    float total;
    public:
    void display(void){
      total =  maths + physics + score;
      print_marks();
      print_number();
      print_score();
      cout<<"your total score is "<<total<<endl;
    };
};

int main(){
    result shanky;
    shanky.set_marks(22,55);
    shanky.set_number(333);
    shanky.set_score(33);
    shanky.display();
    return 0;
}