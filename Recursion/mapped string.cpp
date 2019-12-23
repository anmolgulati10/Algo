#include<iostream>
using namespace std;
void mapped(string str,string ans)
{
    //Base Case
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    //Recursion
    char ch1=str[0];
    string ros1=str.substr(1);
    int ch1_int=(ch1-'0');
    ch1=(ch1_int + 'A' -1);
    mapped(ros1,ans+ch1);
    if(str.length()>1)
    {
        char ch2=str[1];
        string ros2=str.substr(2);
        int ch2_int=(ch2-'0');
        ch2=( ch2_int + 'A' -1);
        if((ch1_int*10+ch2_int)<=26)
        {   
            char a=(ch1_int*10+ch2_int) + 'A' -1;
            mapped(ros2,ans+a);
        }
    }
}
int main() {
	string str;
    cin>>str;
    mapped(str,"");
}