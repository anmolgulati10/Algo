#include<iostream>
using namespace std;
string character(string str)
{   
    if(str.length()==0)
    {
        return "";
    }
    char ch=str[0];
    string ros=str.substr(1);
    string result=character(ros);
    if(ch==result[0])
    {   
        string x="*";
        return ch+x+result;
    }
    else
    {
        return ch+result;
    }
}
int main() {
	string str;
    cin>>str;
    cout<<character(str);
}