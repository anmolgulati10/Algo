#include<iostream>
using namespace std;
int main() {
	int i,j,n,star,space;
    cin>>n;
    star=1;
    space=(2*(n-1))-1;
    for(i=0;i<n;i++)
    {   star=1;
        for(j=0;j<=i;j++)
        {
            cout<<star<<" ";
            star++;
        }
        for(j=0;j<space;j++)
        {
            cout<<" "<<" ";
        }
        for(j=0;j<=i;j++)
        {
            if((i-j)==(n-1))
            {
                star--;
                continue;
            }
            else{
                star--;
                cout<<star<<" ";}
        }
        space=space-2;
        cout<<endl;
    }
}