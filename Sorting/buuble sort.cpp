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

    while(1)
    {
        bool is_swap;
        is_swap=false;
        for(i=0;i<n-1;i++)
        {   
            if(a[i]>a[i+1])
            {   
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                is_swap=true;
            }
        }
        if(is_swap==false)
        {
            break;
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}