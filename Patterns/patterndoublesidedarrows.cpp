#include<iostream>
using namespace std;
int main() {
	int space1,space2,star1,i,j,x,n;
	cin>>n;
	space1=n-1;
	space2=-1;
	star1=1;
	x=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<space1;j++)
		{
			cout<<" "<<" ";
		}
		for(j=0;j<star1;j++)
		{	if (star1==1)
			{cout<<x<<" ";}
			else
			{
				cout<<x<<" ";
				x--;
			}
		}
		for(j=0;j<space2;j++)
		{
			cout<<" "<<" ";
		}
		for(j=0;j<star1;j++)
		{
			if(star1==1)
			{
				continue;
			}
			else{
				x++;
				cout<<x<<" ";
			}
		}
		if(i<(n/2))
		{
			star1++;
			space1=space1-2;
			space2=space2+2;
			x++;
		}
		else
		{
			star1--;
			space1=space1+2;
			space2=space2-2;
			x--;
		}
		cout<<endl;
	}

}