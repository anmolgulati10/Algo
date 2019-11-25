#include<iostream>
using namespace std;
int main() {
	long long num,temp,i=0,x,sum=0,k=1;
	cin>>num;
	temp=num;
	while(temp>0)
	{
		i++;
		temp=temp/10;
	}

	while(num>0)
	{
		x=num%10;
		if(i==1)
		{
			if((9-x)==0)
			{
				x=9;
			}
			else if(9-x<x)
			{
				x=9-x;
			}
		}
		else if((9-x)<x)
		{
			x=9-x;
		}
		sum+=x*k;
		i--;
		k=k*10;
		num=num/10;
	}
	cout<<sum;
}      