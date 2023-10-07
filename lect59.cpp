#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting file to hout stream
    
    // ofstream hout("sample58.txt");
    // cout<<"Enter your name";
    // string name;
    // cin>>name;

    // hout<<name;
    // hout.close();

    ifstream hh("sample58.txt");
    string content;
    // file ka content content variable mai la do
    hh>>content;
    cout<<"the content of the file is "<<content<<endl;
    return 0;
}