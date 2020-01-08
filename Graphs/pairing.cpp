#include<bits/stdc++.h>
using namespace std;

class graph
{
	unordered_map<int,list<int>> adjlist;

public:
	void addedge(int u,int v,bool bir=true)
	{
		adjlist[u].push_back(v);
		if(bir)
		{
			adjlist[v].push_back(u);
		}
	}

	void bfshelper(int src,unordered_map<int,bool> &visited,vector<int> &v)
	{
		visited[src]=true;
		queue<int> q;
		q.push(src);
		int y=1;
		while(!q.empty())
		{
			int poped=q.front();
			q.pop();
			for(auto x:adjlist[poped])
			{
				if(!visited[x])
				{
					visited[x]=true;
					y++;
					q.push(x);
				}
			}
		}
		v.push_back(y);
	}

	void bfs(int n)
	{
		unordered_map<int,bool> visited;
		vector<int> v;
		int component=0;
		for(int i=0;i<n;i++)
		{
			if(!visited[i])
			{
				bfshelper(i,visited,v);
			}
		}
		int count=0;
		for(int i=1;i<v.size();i++)
		{
			for(int j=0;j<i;j++)
			{
				count+=(v[i]*v[j]);
			}
		}
		cout<<count;
		return;
	}
};

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	graph g;

	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g.addedge(u,v);
	}
	g.bfs(n);
	return 0;
}