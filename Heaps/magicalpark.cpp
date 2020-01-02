#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	int sum=1;
	for(int i=1;i<=n;i++)
	{
		sum*=i;
	}
	return sum;
}

int comb(int n,int c=2)
{
	int num=factorial(n);
	int den=factorial(n-c)*factorial(c);

	return (num/den);
}
int main() {
	int test;
	cin>>test;
	for(int j=0;j<test;j++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int cumsum[n+1];
		cumsum[0]=0;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			cumsum[i+1]=sum;
		}

		int mod[n+1];
		for(int i=0;i<=n;i++)
		{
			mod[i]=cumsum[i]%n;
		}
		int frequency[n]={0};
		for(int i=0;i<=n;i++)
		{
			frequency[mod[i]]++;
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			
			if(frequency[i]>1)
			{
				
				//cout<<"1"<<endl;
				count+=comb(frequency[i]);
				//cout<<count;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}