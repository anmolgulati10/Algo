#include<iostream>
using namespace std;
int main() {
	int i;
    int num,sum=0;
    cin>>num;
    while(num>0)
    {
        i=num%10;
        sum=sum*10+i;
        num=num/10;
    }
    cout<<sum;
    return 0;
}