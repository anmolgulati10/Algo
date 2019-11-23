#include<iostream>
using namespace std;
int main() {
	int n,i,j,tar;
    cin>>n;
    int* a=new int[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>tar;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==tar)
            {
                if (a[i]<=a[j])
                {
                    cout<<a[i]<<" and "<<a[j]<<endl;
                }
                else
                {
                    cout<<a[j]<<" and "<<a[i]<<endl;
                }
            }
        }
    }
}