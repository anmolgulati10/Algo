#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
			flag=1;
		}
		else if(a[i]>a[i+1] and flag==0)
		{
			flag=0;
		}
		else if(a[i]>a[i+1] and flag==1)
		{	
			flag=-1;
			cout<<"false";
			break;
		}
		else if(a[i]==a[i+1])
		{	
			flag=-1;
			cout<<"false";
			break;
		}

	}
	if (flag==1 or flag==0)
	{
		cout<<"true";
	}
}