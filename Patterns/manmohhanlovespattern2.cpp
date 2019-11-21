#include<iostream>
using namespace std;
int main() {
	int i,j,n,x=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			
			if(j==1 or j==i)
			{
				cout<<x;
			}
			else
			{
				cout<<0;
			}
			
		}
		if (i==1)
		{   cout<<endl;
			continue;
		}
		else
		{
			x++;
		}
		cout<<endl;
	}
}