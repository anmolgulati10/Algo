#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;

void getans(priority_queue<int,vector<int>,greater<int>> mp)
{
	vector<int> v;
	while(!mp.empty())
	{
		v.push_back(mp.top());
		mp.pop();
	}
	if((v.size()&1))
	{
		cout<<v[(v.size())/2]<<" ";
	}
	else
	{
		int right=v.size()/2;
		int left=right-1;
		int mid=(v[right]+v[left])/2;
		cout<<mid<<" ";
	}
	return;
} 

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;

	for(int i=0;i<test;i++)
	{
		int n;
		cin>>n;
		int no;
		priority_queue<int,vector<int>,greater<int>> mp;
		for(int i=0;i<n;i++)
		{
			cin>>no;
			mp.push(no);
			getans(mp);
		}

	}

	return 0;
}