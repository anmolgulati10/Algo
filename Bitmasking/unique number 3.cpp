#include<iostream>
using namespace std;
int main() {
	int n;
    cin>>n;
    int arr[n],a[32]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        for(int j=31;j>=0;j--)
        {
            a[j]+=(num&1);
            num=num>>1;
        }
    }
    int sum=0;
    int k=1;
    for(int i=31;i>=0;i--)
    {
        sum=sum+(a[i]%3)*k;
        k=k*2;
    }
    cout<<sum;
}