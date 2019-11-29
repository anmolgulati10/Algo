#include<iostream>
using namespace std;
int sum(int a[],int n)
{
	int x=0;
	for(int i=0;i<n;i++)
	{
		x+=a[i];
	}
	return x;
}
bool issafe(int a[],int s,int n,int mid)
{
	int student=1;
	int maxpages=0;
	for(int i=0;i<n;i++)
	{
		maxpages+=a[i];
		if(maxpages>mid)
		{
			student++;
			// if(student>s)
			// {
			// 	return false;
			// }
			maxpages=a[i];
		}
	}
	if(student<=s)
	{
		return true;
	}
	return false;;
}
int BS(int a[],int s,int n)
{
	int minp=a[n-1];
	int maxp=sum(a,n);
	int ans=maxp;
	while(minp<=maxp)
	{
		int mid=(minp + (maxp-minp)/2);
		if(issafe(a,s,n,mid))
		{
			ans=mid;
			maxp=mid-1;
		}
		else
		{
			minp=mid+1;
		}
	}
	return ans;

}
int main() {
	int test,n,s;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cin>>n>>s;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		cout<<BS(a,s,n)<<endl;;
	}
}