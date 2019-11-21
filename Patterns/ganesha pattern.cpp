#include<iostream>
using namespace std;
int main() {
	int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<(n/2+1))
            {
                if(j==0 or j==(n/2) or (i==0 and j>=(n/2)) or i==n/2)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                if(j==n/2 or j==(n-1) or ((i==n-1)and(j<n/2)))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}