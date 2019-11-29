#include<bits/stdc++.h>
using namespace std;

int maxstudent(long long int n,long long int m,long long int y,long long int x)
{
	long long int max=0;
	long long int s=0;
	long long int e=n;

	while(s<=e)
	{
		long long int mid=(s+e)/2;
		long long int g=m+(n-mid)*y;
		if(mid*x<=g)
		{
			max=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	return max;
}

int main(int argc, char const *argv[])
{
	long long int n,m,x,y;
	cin>>n>>m>>x>>y;
	cout<<maxstudent(n,m,y,x);
	return 0;
}