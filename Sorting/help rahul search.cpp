#include<bits/stdc++.h>
using namespace std;
int search(int a[],int n,int data)
{
	int s=0;
	int e=n-1;
	if(s==e)
	{
		if(a[s]==data)
		{
			return s;
		}
		else
		{
			return -1;
		}
	}
	while(s<=e)
	{
		int mid=(s+(e-s)/2);
		if(a[mid]==data)
		{
			return mid;
		}
		else if(a[e]>a[mid])
		{
			if(data>a[mid] and data<=a[n-1])
			{
				s=mid+1;
			}
			else
			{
				e=mid-1;
			}
		}
		else if(a[s]<a[mid])
		{
			if(data>=a[s] and data<a[mid])
			{
				e=mid-1;
			}
			else
			{
				s=mid+1;
			}
		}
	}
	return -1;
}
int main()
{
	int n,data;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>data;
	cout<<search(a,n,data);
}