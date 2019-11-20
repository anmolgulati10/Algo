#include<iostream>
using namespace std;
int decimal(int num)
{
    int i=1;
    int sum=0,x;
    while(num>0)
    {
        x=num%10;
        sum+=x*i;
        i=i*2;
        num=num/10;
    }
    return sum;
}
int main() {
    int n,num;
    int i,x[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        x[i]=decimal(num);
    }
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<endl;
    }
	return 0;
}