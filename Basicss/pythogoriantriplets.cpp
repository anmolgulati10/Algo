#include<iostream>
using namespace std;
int main() {
	long int N,m,n,first,second,third;
    cin>>N;
    if (N%2==0 and N>2)
    {
        m=N/2;
        n=1;
        second=N;
        first=(m*m)-1;
        third=(m*m)+1;
        if ((first*first)+(second*second)==(third*third))
        {
            cout<<first<<" "<<third<<endl;
        }
        else
        {
            cout<<-1;
        }
    }
    else if(N%2==1 and N>2)
    {
        m=(N+1)/2;
        n=(N-1)/2;
        second=2*m*n;
        first=(m*m)-(n*n);
        third=(m*m)+(n*n);
        if ((first*first)+(second*second)==(third*third))
        {
            cout<<second<<" "<<third<<endl;
        }
        else
        {
            cout<<-1;
        }
    }
    else
    {
        cout<<-1;
    }
    return 0;
}