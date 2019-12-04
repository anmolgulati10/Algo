#include<iostream>
using namespace std;
int main() {
	int test,num;
    cin>>test;
    int i;
    for(i=0;i<test;i++)
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