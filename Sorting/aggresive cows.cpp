#include<bits/stdc++.h>
using namespace std;
bool issafe(int arr[],int c,int n,int mid)
{
	int cow=1;
	int cd=arr[0];
	for(int i=1;i<n;i++)
	{
		if((arr[i]-cd)>=mid)
		{
			cow++;
			cd=arr[i];
			if(cow==c)
			{
				return true;
			}
		}
	}
	return false;
}
int BS(int arr[],int c,int n)
{
	int mind=arr[0];
	int maxd=arr[n-1]-arr[0];
	int ans=maxd;
	while(mind<=maxd)
	{
		int mid=(mind)+(maxd-mind)/2;
		if(issafe(arr,c,n,mid))
		{
			ans=mid;
			mind=mid+1;
		}
		else
		{
			maxd=mid-1;
		}
	}
	return ans;
}
int main() {
	int n,c;
	cin>>n>>c;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<BS(a,c,n);
}