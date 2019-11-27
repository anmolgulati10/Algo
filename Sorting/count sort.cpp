#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	int f[max+1]={0};
	for(int i=0;i<n;i++)
	{
		f[arr[i]]+=1;
	}
	for(int i=0;i<(max+1);i++)
	{
		if(f[i]!=0)
		{
			while(f[i]>0)
			{
				cout<<i<<" ";
				f[i]--;
			}
		}
	}
}