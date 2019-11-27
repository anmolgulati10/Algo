#include<iostream>
using namespace std;
int main() {
	int i,j,n,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j>0;j--)
        {
            if(a[j]<=a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;;
    }
}