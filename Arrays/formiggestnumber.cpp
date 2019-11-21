#include<bits/stdc++.h>
using namespace std;

string converttostring(int n)
{
	string ans="";
	while(n>0)
	{
		int d=n%10;
		char ch=d+'0';
		ans=ch+ans;
		n=n/10;
	}
	return ans;
}
bool compare1(string s1,string s2)
{
	if((s1+s2)>=(s2+s1))
	{
		return true;
	}
	else
	{
		return false;
	}
}
void converttointeger(string ans)
{
	stack<int> s;
	int i=ans.length();
	while(i>0)
	{
		int d=ans[i-1]-'0';
		cout<<d<<" ";
		s.push(d);
		i--;
	}
	while(!s.empty())
	{
		cout<<s.top()<<"";
		s.pop();
	}
}
int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		int n;
		cin>>n;
		string a[n];
		for(int i=0;i<n;i++)
		{
			int c;
			cin>>c;
			a[i]=converttostring(c);
		}
		string ans="";
		for(int i=0;i<n-1;i++)
		{
			for(int i=0;i<n-1;i++)
			{
				if(!compare1(a[i],a[i+1]))
				{
					swap(a[i],a[i+1]);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<"";
		}
	}
	
	return 0;
}