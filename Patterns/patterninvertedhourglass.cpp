#include<iostream>
using namespace std;
int main() {
	int star,space,j,i,x,n;
    cin>>n;
    space=(2*n-1);
    star=1;
    for(i=0;i<(2*n+1);i++)
    {
        x=n+1;
        for(j=0;j<star;j++)
        {
            x--;
            cout<<x<<" ";
        }
        for(j=0;j<space;j++)
        {
            cout<<" "<<" ";
        }
        for(j=0;j<star;j++)
        {
            if((star-j)==(n+1))
            {
                x++;
                continue;
            }
            else
            {
                cout<<x<<" ";
                x++;
            }
        }
        if(i<(2*n+1)/2)
        {
            star++;
            space=space-2;
        }
        else
        {
            star--;
            space=space+2;
        }
        cout<<endl;

    }
}