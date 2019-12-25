#include<iostream>
using namespace std;
void printls(string str,string ans,string a)
{
    if(str.length()==0)
    {
        if(ans<a)
        {
            cout<<ans<<endl;
        }
        return;
    }
    int i=0;
    while(str[i]!='\0')
    {
        char ch=str[i];
        string ls=str.substr(0,i);
        string rs=str.substr(i+1);
        string ros=ls+rs;
        printls(ros,ans+ch,a);
       // printls(ros,ch+ans);
        i++;
    }
    return;
}

int main() {
    string strf;
    cin>>strf;
    printls(strf,"",strf);
}
