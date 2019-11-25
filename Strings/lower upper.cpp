#include<iostream>
using namespace std;
int main() {
	char ch;
    ch=cin.get();
    if(ch>=65 and ch<=90)
    {
        cout<<"UPPERCASE";
    }
    else if(ch>=97 and ch<=122)
    {
        cout<<"lowercase";
    }
    else
    {
        cout<<"Invalid";
    }
}