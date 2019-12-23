#include<bits/stdc++.h>
using namespace std;
void quicksort(int arr[],int start,int end)
{
	if(start>end)
	{
		return;
	}
	int front=start;
	int back=end;
	int pivot=arr[(front+back)/2];
	while(front<=back)
	{
		while(arr[front]<pivot)
		{
			front++;
		}
		while(arr[back]>pivot)
		{
			back--;
		}

		if(front<=back)
		{
			int temp=arr[front];
			arr[front]=arr[back];
			arr[back]=temp;
		//swap(arr[front],arr[back]);
			front++;
			back--;
		}
	}
	quicksort(arr,start,back);
	quicksort(arr,front,end);
	return;
}
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}