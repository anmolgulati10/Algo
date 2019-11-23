#include<bits/stdc++.h>
using namespace std;

unsigned long long int power(long long int a,long long int b,long long int c)
{
	if(b==0)
	{
		return 1;
	}
	if(b&1)
	{
		unsigned long long int x=power(a,b/2,c);
		return (((x%c)*(x%c)*(a%c))%c);
	}
	else
	{
		unsigned long long int x=power(a,b/2,c);
		return (((x%c)*(x%c))%c);
	}
}
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;
	unsigned long long int x=power(a,b,c);
	cout<<x;
	//cout<<(x%c);
	return 0;
}