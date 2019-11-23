#include<bits/stdc++.h>
using namespace std;

void sieve(int a[],int N)
{
	a[0]=a[1]=0;
	a[2]=1;

	for(int i=3;i<=N;i=i+2)
	{
		if(a[i])
		{
			for(int j=i*i;j<=N;j+=2*i)
			{
				a[j]=0;
			}
		}
	}
	
	return;
}
int main(int argc, char const *argv[])
{
	int N=100;
	int a[N+1]={0};
    for(int i=3;i<=N;i=i+2)
	{
		a[i]=1;
	}
	sieve(a,N);
	for(int i=0;i<=N;i++)
	{
		if(a[i])
		{
			cout<<i<<" ";
		}
		//cout<<"hi";
	}
	return 0;
}