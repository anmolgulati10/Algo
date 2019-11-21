#include<iostream>
using namespace std;
int main() {
	int x,i,j,n,star,space;
    cin>>n;
    space=-1;
    star=n;
    for(i=0;i<n;i++)
    {
        x=1;
        for(j=0;j<star;j++)
        {
            cout<<x<<" ";
            x++;
        }
        for(j=0;j<space;j++)
        {
            cout<<"*"<<" ";
        }
        space=space+2;
        star--;
        cout<<endl;
    }
}