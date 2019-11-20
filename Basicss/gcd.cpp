#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    int i,n,x;
	cin>>num1;
	cin>>num2;
    n=(num1<=num2) ? num1 : num2;
    for(i=1;i<=n;i++)
    {
        if ((num1%i==0) and (num2%i==0))
        {
            x=i;
        }
    }
	cout<<x;
	return 0;
}