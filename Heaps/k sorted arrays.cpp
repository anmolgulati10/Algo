#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;

class arrayx{
public:
	int data;
	int arrayno;
	int index;

	arrayx()
	{
		this->data=0;
		this->arrayno=0;
		this->index=0;
	}
};

class mycompare
{
	public:
	bool operator()(arrayx a1,arrayx a2)
	{
		return a1.data>a2.data;
	}
};

int main(int argc, char const *argv[])
{
	priority_queue<arrayx,vector<arrayx>,mycompare> pq;
	int n,k;
	cin>>k>>n;
	int arr[k][n];
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	arrayx a[k];
	for(int i=0;i<k;i++)
	{
		a[i].data=arr[i][0];
		a[i].arrayno=i;
		a[i].index=0;
		pq.push(a[i]);
	}

	while(pq.top().data!=INT_MAX)
	{
		cout<<pq.top().data<<" ";
		int arraynumber=pq.top().arrayno;
		int index1=pq.top().index+1;
		if(index1>=n)
		{
			a[arraynumber].data=INT_MAX;
			a[arraynumber].index=index1-1;
			a[arraynumber].arrayno=arraynumber;
		}
		else
		{
			a[arraynumber].data=arr[arraynumber][index1];
			a[arraynumber].index=index1;
			a[arraynumber].arrayno=arraynumber;
		}
		pq.pop();
		pq.push(a[arraynumber]);
	}


	return 0;
}