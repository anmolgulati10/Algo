#include<iostream>
#include<cmath>
using namespace std;
long long int search(long long int n,long long int k)
{
	long long int s=1;
	long long int e=n;
    long long int ans=0;
	while(s<=e)
	{
		long long int mid=(e+s)/2;
		if(pow(mid,k)<=n)
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
    return ans;
}
int main() {
	long long int test,n,k;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cin>>n>>k;
		cout<<search(n,k)<<endl;
	}
	//cout<<search(n,k);
}