#include<iostream>
using namespace std;
int main() {
	int sum=0,n;
    while(sum>=0)
    {
        cin>>n;
        sum=sum+n;
        if(sum<0)
        {
            break;
        }
        else
        {
            cout<<n<<endl;
        }
    }
}