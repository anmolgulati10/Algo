#include<bits/stdc++.h>
using namespace std;

void sieve(long long int a[],long long int N)
{
	a[0]=a[1]=0;
	a[2]=1;

	for(long long int i=3;i<=N;i=i+2)
	{
		if(a[i])
		{
			for(long long int j=i*i;j<=N;j+=2*i)
			{
				a[j]=0;
			}
		}
	}
	
	return;
}
int main(int argc, char const *argv[])
{
	long long int N=100000000;
	long long int a[N+1]={0};
	int n;
	cin>>n;
    for(long long int i=3;i<=N;i=i+2)
	{
		a[i]=1;
	}
	sieve(a,N);
	
	int x=0;
	for(long long int i=0;i<=N;i++)
	{
		if(a[i])
		{
			x++;
		}
		if(x==n)
		{
			cout<<i<<" ";
			break;
		}
		//cout<<"hi";
	}
	return 0;
}