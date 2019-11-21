#include<iostream>
using namespace std;
int main() {
	int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                cout<<1;
            }
            else
            {
                if(j==1 or j==i)
                {
                    cout<<1;
                }
                else
                {
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }

}