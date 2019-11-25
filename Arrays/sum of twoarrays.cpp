#include<iostream>
using namespace std;
int main() {
	int i,N,M,x;
    int j,k;
    cin>>N;
    int a[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    cin>>M;
    int b[M];
    for(i=0;i<M;i++)
    {
        cin>>b[i];
    }
    if(M>=N)
    {   x=M+1;

    }
    else
    {   x=N+1;
    }
    int c[x];
    j=N-1;
    k=M-1;
    int num;
    int add=0;
    for(i=x-1;i>=0;i--)
    {   if(j>=0 and k>=0)
            {num=a[j]+b[k]+add;
            c[i]=num%10;
            add=num/10;
            j--;
            k--;}
        else if(j<0 and k>=0)
        {
            num=b[k]+add;
            c[i]=num%10;
            add=num/10;
            j--;k--;
        }
        else if(k<0 and j>=0)
        {
            num=a[j]+add;
            c[i]=num%10;
            add=num/10;
            j--;k--;
        }
        else
        {
            c[i]=add;
        }
    }
    for(i=0;i<x;i++)
    {
        if(i==0 and c[i]==0)
        {
            continue;
        }
        else
        {
            cout<<c[i]<<", ";
        }
    }
    cout<<"END";
}