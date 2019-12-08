#include<iostream>
using namespace std;
void indices(int arr[],int size,int idx,int m)
{   
    if(idx==-1)
    {
        return;
    }
    indices(arr,size,idx-1,m);
    if(arr[idx]==m)
    {
        cout<<idx<<" ";
    }
    else
    {
        return;
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
    indices(a,size,size-1,m);

}