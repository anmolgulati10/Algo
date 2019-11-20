#include<iostream>
using namespace std;
int main() {
	int num,x,i=1,sum=0;
    cin>>num;
    while(num>0)
    {
        x=num%10;
        sum+=x*i;
        num=num/10;
        i=i*2;
    }
    cout<<sum;
    return 0;
}