#include<iostream>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void keypad(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string ros=str.substr(1);
    int ch_int=ch-'0';
    int i=0;
    string ans_str=table[ch_int];
    while(ans_str[i]!='\0')
    {
        keypad(ros,ans+ans_str[i]);
        i++;
    }

}
int main() {
	string str;
    cin>>str;
    keypad(str,"");
}