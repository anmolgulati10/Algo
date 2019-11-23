#include<iostream>
using namespace std;
int main() {
	int n,i,max;
    cin>>n;
    int* a=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    cout<<max;
    delete[] a;

}