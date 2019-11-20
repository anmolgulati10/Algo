#include<iostream>
using namespace std;
int main() {
	int test,i;
	cin>>test;
	for(i=0;i<test;i++)
	{
		int c1,c2,c3,c4,n,m;
		cin>>c1>>c2>>c3>>c4;
		cin>>n>>m;
		int times,ans;
		
		int sum1=0,fsum1=0;
		for(int j=0;j<n;j++)
		{
			cin>>times;
			ans=times*c1;
			if(ans>=c2)
			{
				sum1=sum1+c2;
			}
			else
			{
				sum1=sum1+ans;
			}
		}
		if(sum1>c3)
		{
			fsum1=c3;
		}
		else
		{
			fsum1=sum1;
		}

		int sum2=0,fsum2=0;
		for(int j=0;j<m;j++)
		{
			cin>>times;
			ans=times*c1;
			if(ans>=c2)
			{
				sum2=sum2+c2;
			}
			else
			{
				sum2=sum2+ans;
			}
		}
		if(sum2>c3)
		{
			fsum2=c3;
		}
		else
		{
			fsum2=sum2;
		}
		int fsum=0;
		if(fsum1+fsum2>c4)
		{
			fsum=c4;
		}
		else
		{
			fsum=fsum1+fsum2;
		}
		cout<<fsum<<endl;
	}

}