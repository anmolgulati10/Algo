#include<iostream>
#include<cmath>
using namespace std;
int stringtointeger(string str)
{   
    if(str.length()==1)
    {
        return (str[0]-'0');
    }
    char ch=str[0];
    string ros=str.substr(1);
    int result=stringtointeger(ros);
    int x=(ch-'0')*pow(10,ros.length());
    return (x+result);
}
int main() {
	string str;
    cin>>str;
    cout<<stringtointeger(str);
}