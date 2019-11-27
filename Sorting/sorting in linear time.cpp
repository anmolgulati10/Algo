#include<iostream>
using namespace std;
int main()
{
    int f[3]={0};
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        f[a[i]]+=1;
    }
    for(i=0;i<f[0];i++)
    {
        cout<<0<<endl;
    }
    for(i=0;i<f[1];i++)
    {
        cout<<1<<endl;
    }
    for(i=0;i<f[2];i++)
    {
        cout<<2<<endl;
    }
}