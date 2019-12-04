#include<iostream>
using namespace std;
int main()
{
    int x,y,sum,max_sum=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        for(int j=i;j<=y;j++)
        {
            sum=i^j;
            if(sum>=max_sum)
            {
                max_sum=sum;
            }
        }
    }
    cout<<max_sum;
}