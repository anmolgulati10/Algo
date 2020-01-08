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

	void display()
	{
		for(auto i:adjlist)
		{
			cout<<i.first<<"->";

			for(auto x:i.second)
			{
				cout<<x<<",";
			}
		}
		cout<<endl;
	}
	int bfshelper(int src,int n,int a,int b,unordered_map<int,int> visited)
	{
		int currentcost=a;
		queue<int> q;
		visited[src]=0;
		q.push(src);

		while(!q.empty())
		{
			int poped=q.front();
			q.pop();
			//int x=1;
			for(auto x:adjlist[poped])
			{
				if(visited[x]!=INT_MAX)
				{
					continue;
				}
				if((visited[poped]+b)>=a)
				{
					currentcost+=(a-visited[poped]+b);
					visited[poped]=0;
					visited[x]=b;
				}
				else((visited[poped]+b)<a)
				{	
					currentcost+=b;
					visited[x]=b;
				}
				q.push(x);
			}
		}
		return currentcost;

	}

	int bfs(int n,int a,int b)
	{
		if(b>=a)
		{
			return n*a;
		}
		unordered_map<int,int> visited;
		for(auto x:adjlist)
		{
			visited[x]=INT_MAX;
		}
		int cost=0;
		for(auto x:adjlist)
		{
			cost+=bfshelper(x,n,a,b,visited);	
		}
		return cost;
	}
};

int main(int argc, char const *argv[])
 {
 	int test;
 	cin>>test;
 	for(int i=0;i<test;i++)
 	{
 		graph g;
 		int n,m,a,b;
 		cin>>n>>m>>a>>b;
 		for(int i=0;i<m;i++)
 		{
 			int u,v;
 			cin>>u>>v;
 			g.addedge(u,v);
 		}
 		//cout<<g.bfs(n,a,b)<<endl;
 	}
 	return 0;
 } 