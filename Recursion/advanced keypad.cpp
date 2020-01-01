#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"};

void keypad(string str,string ans,unordered_map<string,int> &mp)
{
    if(str.length()==0)
    {
        //cout<<ans<<endl;
        mp[ans]=1;
        return;
    }
    //cout<<"check1";
    char ch=str[0];
    string ros=str.substr(1);
    int ch_int=ch-'0';
    int i=0;
    string ans_str=table[ch_int];
    while(ans_str[i]!='\0')
    {
        keypad(ros,ans+ans_str[i],mp);
        i++;
    }
    return;
}

void display(string str,unordered_map<string,int> &mp)
{
	int x=str.length();
	for(int j=0;j<11;j++)
	{
		string s=searchIn[j];
		for(int i=0;i<=(s.length()-x);i++)
		{
			string s1=s.substr(i,x);
			if(mp.count(s1))
			{
				cout<<s<<endl;
				break;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	unordered_map<string,int> mp;
	keypad(str,"",mp);
	display(str,mp);
	return 0;
}