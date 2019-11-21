#include<iostream>
using namespace std;
int main() {
	int i,j,n,star,space;
    cin>>n;
    star=(n/2+1);
    space=-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<star;j++)
        {
            cout<<"*"<<" ";
        }
        for(j=0;j<space;j++)
        {
            cout<<" "<<" ";
        }
        for(j=0;j<star;j++)
        {
            if((star-j)==(n/2+1))
            {
                continue;
            }
            else
            {
                cout<<"*"<<" ";
            }
        }
        if(i<(n/2))
        {
            space=space+2;
            star--;
        }
        else
        {
            space=space-2;
            star++;
        }
        cout<<endl;
    }
}