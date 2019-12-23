#include<iostream>
using namespace std;
void merge(int arr[],int sidx,int eidx)
{
	int midx=(eidx+sidx)/2;
	int i=sidx;
	int j=midx+1;
	int temp[eidx-sidx+1];
	int p=0;
	while(i<=midx and j<=eidx)
	{
		if(arr[i]<=arr[j])
		{
			temp[p]=arr[i];
			i++;
			p++;
		}
		else
		{
			temp[p]=arr[j];
			j++;
			p++;
		}
	}
	while(i<=midx)
	{
		temp[p]=arr[i];
		p++;
		i++;
	}
	while(j<=eidx)
	{
		temp[p]=arr[j];
		j++;
		p++;
	}
	int y=0;
	for(int k=sidx;k<=eidx;k++)
	{
		arr[k]=temp[y];
		y++;
	}
}
void mergesort(int arr[],int sidx,int eidx)
{
	if(sidx==eidx)
	{
		return;
	}
	int midx=(eidx+sidx)/2;
	mergesort(arr,sidx,midx);
	mergesort(arr,midx+1,eidx);
	merge(arr,sidx,eidx);
	return;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}