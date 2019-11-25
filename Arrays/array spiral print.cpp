#include<iostream>
using namespace std;
int main() {
    int x,M,N,sc,sr,er,ec,i;
    cin>>M>>N;
    int a[M][N];
    x=0;
    sc=0;
    sr=0;
    ec=N-1;
    er=M-1;
    for(i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
    while(x<(M*N))
    {
        for(i=sr;i<=er;i++)
        {   ++x;
            cout<<a[i][sc]<<", ";
        }
        sc++;
    
        for(i=sc;i<=ec;i++)
        {   ++x;
            cout<<a[er][i]<<", ";
        }
        er--;
        for(i=er;i>=sr;i--)
        {   ++x;
            cout<<a[i][ec]<<", ";
        }
        ec--;
        for(i=ec;i>=sc;i--)
        {   ++x;
            cout<<a[sr][i]<<", ";
        }
        sr++;
    }
    cout<<"END";
	return 0;
}
