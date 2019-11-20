#include<iostream>
using namespace std;

int power(int x,int i)
{
    int sum=1,j;
    for(j=0;j<i;j++)
    {
        sum=sum*x;
    }
    return sum;
}
int main() {
	int i=0,num,temp,x,sum=0,temp1;
    cin>>num;
    temp=num;
    temp1=num;
    while(num>0)
    {
        i++;
        num=num/10;
    }
    while(temp>0)
    {
        x=temp%10;
        sum=sum+power(x,i);
        temp=temp/10;
    }
    if (sum==temp1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }


}