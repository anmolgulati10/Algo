#include<iostream>
using namespace std; 
int main() {
    int i,j,N,k;
    cin>>N;
    int a[N],b[N],c[2*N];

    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<N;i++)
    {
        cin>>b[i];
    }
    j=0;k=0;
    for(i=0;i<2*N;i++)
    {
        if(b[k]>=a[j])
        {
            c[i]=a[j];
            j++;
        }
        else
        {
            c[i]=b[k];
            k++;
        }
    }
    cout<<c[(2*N-1)/2];

}