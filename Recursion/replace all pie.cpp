#include<iostream>
using namespace std;
string pi(string str)
{   
    if(str.length()==0)
    {
        return "";
    }
    char ch=str[0];
    string ros=str.substr(1);
    string result=pi(ros);
    if(ch=='p' and result[0]=='i')
    {
        string p="3.14";
        return p+result.substr(1);
    }
    else
    {
        return ch+result;
    }
}
int main() {
	int size,i;
    cin>>size;
    string str[size];
    for(i=0;i<size;i++)
    {
        cin>>str[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<pi(str[i])<<endl;
    }
}