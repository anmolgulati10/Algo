#include<iostream>
using namespace std;
int main() {
	int test,n,num;
    cin>>test;

    for(int i=0;i<test;i++)
    {
        cin>>num;
        int sum=0;
        while(num>0)
        {
            sum=sum+(num&1);
            num=num>>1;
        }
        cout<<sum<<endl;
    }
}