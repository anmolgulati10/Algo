#include<iostream>
using namespace std;
int main() {
	int i,j,n,a=0,b=1,c;

    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i==0)
            {
                cout<<a<<" ";
            }
            else if (i==1 and j==0)
            {
                cout<<b<<" ";
            }
            else
            {
                c=a+b;
                cout<<c<<" ";
                a=b;
                b=c;
            }
        }
        cout<<endl;
    }
}