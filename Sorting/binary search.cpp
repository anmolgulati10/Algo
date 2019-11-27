#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int num)
{
	int start=0;
	int end=n-1;
	while(start<=end)
	{	
		int mid=(start+end)/2;
		if(a[mid]==num)
		{
			return mid;
		}
		else if(a[mid]>num)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	return -1;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int num;
	cin>>num;
	cout<<binarysearch(a,n,num);
}