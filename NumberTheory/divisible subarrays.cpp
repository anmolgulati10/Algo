#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int test;
	cin>>test;
	for(long long int i=0;i<test;i++)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		long long int f[n]={1};
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			sum=sum%n;
			sum=(sum+n)%n;
			f[sum]++;
		}
		long long int ans=0;
		for(int i=0;i<n;i++)
		{
			int no=f[i];
			ans+=(no*(no-1))/2;
		}
		cout<<ans<<endl;
	}
	return 0;
}