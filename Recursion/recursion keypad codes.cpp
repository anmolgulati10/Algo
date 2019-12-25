#include<iostream>
using namespace std;
string code[]={"abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
int count=0;
void g(string str,string ans)
{
	if(str.length()==0)
	{
		cout<<ans<<" ";
		::count++;
		return;
	}
	char ch=str[0];
	string ros=str.substr(1);
	string ans_string=code[ch-'0' -1];
	int i=0;
	while(ans_string[i]!=0)
	{
		g(ros,ans+ans_string[i]);
		i++;
	}
}
int main() {

	string str;
	cin>>str;
	g(str,"");
	cout<<endl;
	cout<<count;
}