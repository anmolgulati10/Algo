#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool issafe(vector<int> v,int target,int num)
{
	int sum=0;
	//cout<<"vector"<<v.size()<<endl;
	for(int x:v)
	{
		sum+=x;
	}
	if((sum+num)<=target)
	{
		return true;
	}
	return false;
}

void sumitup(int arr[],int n,int i,int target,vector<int> &v)
{
	//base case
	if(i>=n)
	{
		sort(v.begin(),v.end());
		for(int x:v)
		{
			cout<<x<<" ";
		}
		cout<<endl;
		return;
	}

	//cout<<"check1"<<" ";
	for(int j=i;j<n;j++)
	{
		if(issafe(v,target,arr[j]))
		{	
			v.push_back(arr[j]);
			sumitup(arr,n,j+1,target,v);
			v.pop_back();
		}
	}

	return;

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cin>>target;
	sumitup(a,n,0,target,v);
	return 0;
}