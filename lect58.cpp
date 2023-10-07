#include<iostream>
#include<fstream>

//classes for working with files in c++ are:
// fstreambase,
// ifstream, -> derived from fstreambase
// ofstream, -> derived from fstreambase
using namespace std;
// 1 first open a file there are two ways to open the file
// - using constructor 
// - using the member function open() of the class


int main(){
// opening file using constructor and writing it
    // string s = "tatti";
    // ofstream out("sample58.txt"); // write
    // out << s;

// opening file using constructor and writing it
    string s1;
    ifstream in("sample58.txt"); // read  in ki jagha kuch bhi likh sakte hai
    // in>>s1; // it will not consider space and newline
    getline(in, s1); // it will read a line
    getline(in, s1);
    cout<<s1<<endl;
    return 0;
}