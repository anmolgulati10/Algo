#include<iostream>
using namespace std;
int main() {
	int n,xo=0,i,num;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        xo=xo^a[i];
    }
    num=xo;
    int temp;
    int j=0;
    while(num>0)
    {
        temp=(num&1);
        j++;
        if(temp==1)
        {
            break;
        }
        num=num>>1;
    }
    int b[n];
    int k,m=0;
    for(i=0;i<n;i++)
    {
        num=a[i];
        k=0;
        while(num>0)
        {
            temp=num&1;
            k++;
            if(temp==1 and k==j)
            {
                b[m]=a[i];
                m++;
                break;
            }
            num=num>>1;
        }
    }
    int xo1=0;
    for(i=0;i<m;i++)
    {
        xo1=xo1^b[i];
    }
    int s,d;
    s=xo1;
    d=xo1^xo;
    if(s<d)
    {
        cout<<s<<" "<<d;
    }
    else
    {
        cout<<d<<" "<<s;
    }
    

}