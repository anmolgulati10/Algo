#include<iostream>
using namespace std;
int main() {
	int i,j,n,min,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        int x=0;
        for(j=i;j<n;j++)
        {
            if(a[j]<=min)
            {
                min=a[j];
                x=j;
            }
        }
        temp=a[i];
        a[i]=a[x];
        a[x]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}