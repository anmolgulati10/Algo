#include<iostream>
using namespace std;
int lastindex(int arr[],int size,int idx,int m)
{
    if(idx==size)
    {
        return -1;
    }
    int x=lastindex(arr,size,idx+1,m);
    if(x==-1)
    {
        if(arr[idx]==m)
        {
            return idx;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return x;
    }
}
int main() {
	int size,i;
    cin>>size;
    int a[size];
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    cout<<lastindex( a, size,0, m);

}