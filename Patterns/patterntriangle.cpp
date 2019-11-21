#include<iostream>
using namespace std;
int main() {
	int i,j,n,x,space,star;
    cin>>n;
    x=0;
    star=1;
    space=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<space;j++)
        {
            cout<<" "<<" ";
        }
        for(j=0;j<star;j++)
        {
            if(j<((star/2)+1))
            {
                x++;
                cout<<x<<" ";
                
            }
            else
            {
                x--;
                cout<<x<<" ";
            }
        }
        cout<<endl;
        space--;
        star+=2;
    }
}