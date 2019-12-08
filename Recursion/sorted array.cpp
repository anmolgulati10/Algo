#include<iostream>
using namespace std;
bool issorted(int arr[],int size,int idx)
{   
    if(idx==size-1)
    {
        return true;
    }
    bool sorted=issorted(arr,size,idx+1);
    if(sorted and arr[idx]<=arr[idx+1])
    {
        return true;
    }
    else
    {   
        return false;
    }

}
int main() {
	int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    if(issorted(a,size,0))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}