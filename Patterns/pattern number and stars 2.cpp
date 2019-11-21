#include<iostream>
using namespace std;
int main() {
	int space,star,i,j,n,x;
    cin>>n;
    star=1;
    space=n-1;
    star=1;
    for(i=0;i<n;i++)
    {   x=1;
        for(j=0;j<star;j++)
        {
            cout<<x<<"";
            x++;
        }
        for(j=0;j<space;j++)
        {
            cout<<"*"<<"";
        }
        space--;
        star++;
        cout<<endl;
    }

}