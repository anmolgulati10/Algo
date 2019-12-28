#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		int n;
		cin>>n;
		int c[n],l[n];
		for(int i=0;i<n;i++)
		{
			cin>>c[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>l[i];
		}

		int cost=c[0]*l[0];
		int min1=c[0];
		int j=1;
		while(j<n)
		{
			min1=min(min1,c[j]);
			cost+=(min1*l[j]);
			j++;
		}
		cout<<cost<<endl;
	}
	return 0;
}