#include<iostream>
using namespace std;

int lowerbound(int arr[],int num,int n)
{
	int s=0;
	int e=n-1;
	int index=-1;
	while(s<=e)
	{
		int mid=(e+s)/2;
		if(arr[mid]==num)
		{
			index=mid;
			e=mid-1;
		}
		else if(arr[mid]<num)
		{
			s=mid+1;
		}
		else if(arr[mid]>num)
		{
			e=mid-1;
		}
	}
	return index;
}
int upperbound(int arr[],int num,int n)
{
	int s=0;
	int e=n-1;
	int index=-1;
	while(s<=e)
	{
		int mid=(e+s)/2;
		if(arr[mid]==num)
		{
			index=mid;
			s=mid+1;
		}
		else if(arr[mid]<num)
		{
			s=mid+1;
		}
		else if(arr[mid]>num)
		{
			e=mid-1;
		}
	}
	return index;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		int num;
		cin>>num;
		cout<<lowerbound(arr,num,n)<<" "<<upperbound(arr,num,n)<<endl;
	}
}