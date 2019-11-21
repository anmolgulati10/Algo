#include<iostream>
using namespace std;
int main() {
	int i,j,x=1,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
           if(j==0 or j==i)
            {cout<<x<<" ";}
            else
            {
                cout<<0<<endl;
            }
        }
        x++;
        cout<<endl;
    }
}