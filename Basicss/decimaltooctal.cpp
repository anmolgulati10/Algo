#include<iostream>
using namespace std;
int main() {
	int num,x,i=1,sum=0;
    cin>>num;
    {
        while (num>0)
        {
            x=num%8;
            sum+=x*i;
            num=num/8;
            i=i*10;
        }
        cout<<sum;
    }
    return 0;
}