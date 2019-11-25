#include<iostream>
using namespace std;
int main() {
	int test,sum=0,ans=0,i,n;
	cin>>test;

	for( int j=0;j<test;j++)
	{
		ans=0;
		sum=0;
		cin>>n;
		int* a=new int[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			sum+=a[i];
			if(sum>=ans)
			{
				ans=sum;
			}
			else if(sum<0)
			{
				sum=0;
			}
		}
		cout<<ans<<endl;
		delete[] a;
	}

}