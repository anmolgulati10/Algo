#include<iostream>
using namespace std;
int fact(int n)
{
    int i,mul=1;
    for(i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    return mul;
}
int main() {
	int i,j,space,star,n;
    cin>>n;
    space=n-1;
    star=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<space;j++)
        {
            cout<<" "<<" ";
        }
        for(j=0;j<star;j++)
        {
            cout<<(fact(i)/(fact(j)*fact(i-j)))<<"   ";
        }
        space--;
        star=star+1;
        cout<<endl;
    }
}