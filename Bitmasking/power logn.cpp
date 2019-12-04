#include<iostream>
using namespace std;
int main() {
	int n,p;
    cin>>n>>p;
    int ans=1;
    while(p>0)
    {
        ans=ans*n;
        p--;
    }
    cout<<ans;
}