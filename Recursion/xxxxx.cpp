#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void pair(int a[],int m,int b[],int n)
{
	unordered_map<int,int> m;
	sum1=0;
	for(int i=0;i<m;i++)
	{
		sum1+=a[i];
	}

	sum2=0;
	for(int i=0;i<n;i++)
	{
		sum2+=b[i];
	}

	for(int i=0;i<m;i++)
	{
		m[i]=a[i];
	}
	diff=(sum1-sum2)/2;

	for(int i=0;i<n;i++)
	{
		if(m.count(b[i]+diff))
		{
			cout<<"the numbers to be swaped are"<<b[i]+diff<<" "<<b[i]<<"";
			break;
		}
	}

}

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	pair(a,m,b,n);
	return 0;
}