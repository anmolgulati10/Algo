#include<iostream>
using namespace std;
int main() {
	int n,i;
    bool p;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            p=0;
            break;
        }
        else
        {
            p=1;
        }
    }
    (p==1)? cout<<"true": cout<<"false";
}