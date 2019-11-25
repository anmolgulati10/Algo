#include<iostream>
using namespace std;
int main() {
	int k;
	cin>>k;
	string str;
	cin>>str;
	int n=k;
	int ans=0;
	for(int i=0;i<str.length();i++)
	{
		int count=0;
		k=n;
		char ch=str[i];
		for(int j=i;j<str.length();j++)
		{
			if(str[j]==ch)
			{
				count++;
			}
			else if(str[j]!=ch and k>0)
			{
				k--;
				count++;
			}
			else if(str[j]!=ch and k==0)
			{
				break;
			}
		}
		if(count>=ans)
		{
			ans=count;
		}
	}
	cout<<ans;
}