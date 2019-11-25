#include<bits/stdc++.h>
using namespace std;
void sieve(long long int p[],long long int N)
{
	p[0]=p[1]=0;
	p[2]=1;
	for(long long int i=3;i<=N;i=i+2)
	{
		if(p[i])
		{
			for(long long int j=i*i;j<=N;j+=2*i)
			{
				p[j]=0;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	long long int N=100000;
	long long int p[N+1]={0};
	for(long long int i=3;i<=N;i=i+2)
	{
		p[i]=1;
	}
	sieve(p,N);
	long long int a,b;
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cin>>a>>b;
		long long int count=0;
		for(long long int j=a;j<=b;j++)
		{
			if(p[j])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}