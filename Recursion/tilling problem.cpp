#include<bits/stdc++.h>
using namespace std;

int tilling(int n,int m)
{
	//base case
	if(n==1 or (n)==m)
	{
		return n;
	}

	int count=tilling(n-1,m)+tilling(n-m,m);
	return count;
}

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		int n,m;
		cin>>n>>m;
		cout<<tilling(n,m)<<endl;
	}
	return 0;
}