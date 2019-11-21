#include<iostream>
using namespace std;
int main() {
	int space,star,i,j,n;
    cin>>n;
    space=n-1;
    star=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(j=0;j<star;j++)
        {
            if (i==0 or i==(n-1))
            {
                cout<<"*";
            }
            else if (j==0 or j==(star-1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        space=space-1;
        cout<<endl;
    }
}