#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int co;
	cin>>co;
	int x[co];
	int y[co];
	for(int i=0;i<co;i++)
	{
		cin>>x[i]>>y[i];
	}
	sort(x,x+co);
	sort(y,y+co);
	int x_max=0;
	int y_max=0;
	for(int i=1;i<co;i++)
	{
		x_max=max((x[i]-x[i-1]),x_max);
	}
	for(int i=1;i<co;i++)
	{
		y_max=max((y[i]-y[i-1]),y_max);
	}

	cout<<(x_max-1)*(y_max-1);
	return 0;
}