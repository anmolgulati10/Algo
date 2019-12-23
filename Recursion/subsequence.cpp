#include<iostream>
#include<cmath>
using namespace std;
int count=0;
void subsequence(string str,string ans)
{
	if(str.length()==0)
	{
		cout<<ans<<" ";
		return;
	}
	char ch=str[0];
	string ros=str.substr(1);
	subsequence(ros,ans);
	subsequence(ros,ans+ch);
}

int main() {
	string str;
	cin>>str;
	subsequence(str,"");
	cout<<pow(2,str.length());
}