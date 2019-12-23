#include<bits/stdc++.h>
using namespace std;
bool subset(long long int a[],int n)
{
    for(int i=1;i<pow(2,n);i++)
    {
        long long int ans=0;
        long long int num=i;
        int x=n-1;
        while(num>0)
        {
            if(num&1)
            {
                ans=ans+a[x];
            }
            x--;
            num=num>>1;
        }
        if(ans==0)
        {
            return true;
        }
    }
    return false;

}
int main() {
	int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        long long int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        if(subset(a,n))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No";
        }
    }
}