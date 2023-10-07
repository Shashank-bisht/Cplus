// oper and eof function

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    // writing data
    ofstream out;
    out.open("sample60.txt");
    out<<"this is shanky";
    out<<"tatti kha noob";
    out.close();

    ifstream in;
    string st,st2;
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    // eof = end of file
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    return 0;
}