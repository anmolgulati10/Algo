#include<bits/stdc++.h>
#include<unordered_map>
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

	long long int bfshelper(long long int src,long long int n,long long int a,long long int b,unordered_map<long long int,long long int> &visited)
	{
		long long int currentcost=a;
		queue<long long int> q;
		visited[src]=0;
		q.push(src);

		while(!q.empty())
		{
			long long int poped=q.front();
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
				else
				{	
					currentcost+=b;
					visited[x]=b;
				}
				q.push(x);
			}
		}
		return currentcost;

	}

	long long int bfs(long long int n,long long int a,long long int b)
	{
		if(b>=a)
		{
			return n*a;
		}
		unordered_map<long long int,long long int> visited;
		for(auto x:adjlist)
		{
			visited[x.first]=INT_MAX;
		}
		long long int cost=0;
		for(auto x:adjlist)
		{
			if(visited[x.first]==INT_MAX)
			{
				cost+=bfshelper(x.first,n,a,b,visited);
			}	
		}
		return cost;
	}
};

int main(int argc, char const *argv[])
 {
 	long long int test;
 	cin>>test;
 	for(long long int i=0;i<test;i++)
 	{
 		graph g;
 		long long int n,m,a,b;
 		cin>>n>>m>>a>>b;
 		for(long long int i=0;i<m;i++)
 		{
 			long long int u,v;
 			cin>>u>>v;
 			g.addedge(u,v);
 		}
 		cout<<g.bfs(n,a,b)<<endl;
 	}
 	return 0;
 } 