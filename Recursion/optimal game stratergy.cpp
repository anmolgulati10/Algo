#include<iostream>
using namespace std;
int sume=0;
int sumo=0;
void game(int arr[],int sidx,int eidx)
{
    //base case
    if(sidx>eidx)
    {
        return;
    }

    if(sidx&1)
    {
        ::sumo+=arr[sidx];
        game(arr,sidx+1,eidx);
    }
    else
    {
        ::sume+=arr[sidx];
        game(arr,sidx+1,eidx);
    }
}
int main() {
	
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    game(a,0,n-1);
    (sume>=sumo) ? cout<<::sume:cout<<::sumo;
}