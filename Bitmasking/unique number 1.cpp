#include<iostream>
using namespace std;
int main() {
	int n,xo;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        xo=xo^a[i];
    }
    cout<<xo<<endl;
}