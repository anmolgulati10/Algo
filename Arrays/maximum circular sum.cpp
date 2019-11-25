#include<iostream>
using namespace std;
int main() {
	int i,j,n,test,k,sum=0,l,max_sum,ans;
    long long int n_sum;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n;
        int a[n];
        int b[2*n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        k=0;
        for(j=0;j<2*n;j++)
        {
            b[j]=a[k];
            k++;
            if(k==n)
            {
                k=0;
            }
        }
        max_sum=0;
        k=n;
        for(j=0;j<n;j++)
        {   sum=0;
            n_sum=-10000000000000000;
            ans=-1;
            for(l=j;l<k;l++)
            {
                sum=sum+b[l];
                
                if(sum>ans)
                {
                    ans=sum;
                }
                else if(sum<0)
                {   
                    if(sum>n_sum)
                    {
                        n_sum=sum;
                    }
                    sum=0;
                }
            }
            if(ans>=max_sum)
            {
                max_sum=ans;
            }
            k++;
        }
        if(ans==-1)
        {
            cout<<n_sum<<endl;
        }
        else
        {
        cout<<max_sum<<endl;}
    }

}