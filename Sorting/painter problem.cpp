#include<iostream>
using namespace std;
long long int max(long long int a[],long long int n)
{
	long long int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
long long int sum(long long int a[],long long int n)
{
	long long int sumf=0;
	for(int i=0;i<n;i++)
	{
		sumf+=a[i];
	}
	return sumf;
}
bool isvalid(long long int a[],long long int k,long long int n,long long int mid)
{
	long long int painter=1;
	long long int paintingtime=0;
	for(int i=0;i<n;i++)
	{
		paintingtime+=a[i];
		if(paintingtime>mid)
		{
			painter++;
			if(painter>k)
			{
				return false;
			}
			paintingtime=a[i];
		}
	}
	return true;
}
long long int BS(long long int a[],long long int k,long long int n,long long int t)
{
	long long int mint=max(a,n);
	long long int maxt=sum(a,n);
	long long int ans=maxt;
	while(mint<=maxt)
	{
		long long int mid=(mint + (maxt-mint)/2);
		if(isvalid(a,k,n,mid))
		{
			ans=mid*t;
			maxt=mid-1;
		}
		else
		{
			mint=mid+1;
		}
	}
	return (ans%10000003);
}
int main() {
	long long int n,k,t;
	cin>>n>>k>>t;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<BS(a,k,n,t);

}