#include<iostream>
using namespace std;
int main() {
	int N,i,j;
    cin>>N;
    int a[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
    for(j=N-1;j>=0;j--)
    {
        for(i=0;i<N;i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
