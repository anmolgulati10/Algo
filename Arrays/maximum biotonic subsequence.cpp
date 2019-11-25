#include<iostream>
using namespace std;
int main() {
	long long int i,j,k,test,n,x,f_x,y;
    cin>>test;
    for(k=0;k<test;k++)
    {
        cin>>n;
        long long int a[1000000];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        f_x=0;
        if(n==1)
        {
            f_x=1;
        }
        for(i=0;i<n-1;i++)
        {   
            x=1;
            y=0;
            for(j=i;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    y=1;
                    x++;
                }
                else if((a[j]<a[j+1]) and y==1)
                {
                    break;
                }

                else if(a[j]<=a[j+1])
                {
                    x++;
                }
            }
            if(x>=f_x)
            {
                f_x=x;
            }
        }
        cout<<f_x<<endl;
    }
}