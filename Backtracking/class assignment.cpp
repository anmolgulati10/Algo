#include<bits/stdc++.h>
using namespace std;

int count=0;
void distinctdigit(int n,string ans)
{
	if(n==0)
	{
		::count++;
		return;
	}
	distinctdigit(n-1,ans+'a');
	int x=ans.length();
	if(ans[x-1]!='b')
	{
		distinctdigit(n-1,ans+'b');
	}
	return;
}
int pure_dp(int n)
{
	int dp[n+1]={0};
	dp[0]=1;
	dp[1]=2;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		int n;
		cin>>n;
		cout<<"#"<<i+1<<" "<<": "<<pure_dp(n)<<endl;
	}
	return 0;
}