#include<iostream>
using namespace std;
int main() {
	int N,M,i,j,tar,x,k;
    cin>>N>>M;
    int a[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>tar;
    i=0;j=M-1;
    x=a[i][j];
    k=0;
    while(k<(M+N))
    {
        if(x==tar)
        {
            cout<<1;
            break;
        }
        else if(x<tar)
        {
            i=i+1;
        }
        else
        {
            j=j-1;
        }
        k++;
        x=a[i][j];
    }
    if(k==(M+N))
    {
        cout<<0;
    }
}