#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


class graph
{
	unordered_map<int,list<int>> adjlist;

public:
	graph()
	{

	}

	void addedge(int u,int v,bool bir=true)
	{
		adjlist[u].push_back(v);
		if(bir)
		{
			adjlist[v].push_back(u);
		}
		return;
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
			cout<<endl;
		}
	}

	void bfs(int src)
	{
		unordered_map<int,bool> visited;
		queue<int> q;
		q.push(src);
		visited[src]=true;
		while(!q.empty())
		{
			int poped=q.front();
			cout<<poped<<"->";
			q.pop();
			for(auto x:adjlist[poped])
			{
				if(!visited[x])
				{
					q.push(x);
					visited[x]=true;
				}
			}
		}
	}

	void sssp(int src)
	{
		unordered_map<int,int> visited;
		queue<int> q;

		for(auto x:adjlist)
		{
			visited[x.first]=INT_MAX;
		}

		q.push(src);
		visited[src]=0;

		while(!q.empty())
		{
			int poped=q.front();
			q.pop();
			for(auto x:adjlist[poped])
			{
				if(visited[x]==INT_MAX)
				{
					q.push(x);
					visited[x]=visited[poped]+1;
				}
			}
		}
		cout<<endl;
		for(auto x:visited)
		{
			cout<<x.first<<" distance -> "<<x.second<<endl;
		}
	}

	void dfshelper(int src,unordered_map<int,bool> &mp)
	{
		mp[src]=true;
		cout<<src<<" ";
		for(auto x:adjlist[src])
		{
			if(!mp[x])
			{
				dfshelper(x,mp);
			}
		}
		return;
	}

	void dfs(int src)
	{
		unordered_map<int,bool> mp;
		dfshelper(src,mp);
		return;
	}

	void d1fshelper(int src,unordered_map<int,bool> &visited,list<int> &l)
	{
		visited[src]=true;
		for(auto x:adjlist[src])
		{
			if(!visited[x])
			{
				d1fshelper(x,visited,l);
			}
		}
		l.push_front(src);
	}

	void d1fs()
	{
		unordered_map<int,bool> visited;
		list<int> l;

		for(auto x:adjlist)
		{
			auto src=x.first;
			if(!visited[src])
			{
				d1fshelper(src,visited,l);
			}
		}

		for(auto x:l)
		{
			cout<<x<<" ";
		}
	}

	bool iscycle(int src)
	{
		unordered_map<int,bool> visited;
		unordered_map<int,int> parent;
		queue<int> q;

		parent[src]=src;
		visited[src]=true;
		q.push(src);

		while(!q.empty())
		{
			int poped=q.front();
			q.pop();
			for(int neighbour:adjlist[poped])
			{
				if(!visited[neighbour])
				{
					q.push(neighbour);
					parent[neighbour]=poped;
					visited[neighbour]=true;
				}
				else if(visited[neighbour] and parent[poped]!=neighbour)
				{
					return true;
				}
			}
		}

		return false;
	}

	
};

int main(int argc, char const *argv[])
{
	graph g;
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(3,4);
	//g.addedge(4,1);
	g.display();
	cout<<g.iscycle(1);
	return 0;
}