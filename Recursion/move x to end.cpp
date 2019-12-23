#include<iostream>
using namespace std;
string x(string str)
{   
    if(str.length()==0)
    {
        return "";
    }
    char ch=str[0];
    string ros=str.substr(1);
    string result=x(ros);
    if(ch=='x')
    {
        return result+ch;
    }
    else
    {
        return ch+result;
    }

}
int main() {
	string str;
    cin>>str;
    cout<<x(str);
}