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
			cout<<endl;
		}
	}

	void beautifulhelper(int src,int &b,unordered_map<int,bool> &visited)
	{
		queue<int> q;
		visited[src]=true;
		q.push(src);
		//int parentchild=adjlist[src].size();
		while(!q.empty())
		{
			int poped=q.front();
			int parentchild=adjlist[poped].size();
			q.pop();
			for(auto x:adjlist[poped])
			{
				if(!visited[x])
				{
					int childchild=adjlist[x].size();
					if(childchild>parentchild)
					{
						b++;
					}
					visited[x]=true;
					q.push(x);
				}
			}
		}
	}

	void bfs(int n)
	{
		unordered_map<int,bool> visited;
		int b=0;
		for(int i=1;i<=n;i++)
		{
			if(!visited[i])
			{
				beautifulhelper(i,b,visited);
			}
		}
		cout<<b<<endl;
	}

	// void new12(int n)
	// {
	// 	unordered_map<int,int> parent;
	// 	unordered_map<int,int> nodechild;

	// 	for(int i=1;i<=n;i++)
	// 	{
	// 		for(auto x:adjlist[i])
	// 		{
	// 			parent[x]=i;
	// 			nodechild[x]=adjlist[x].size();
	// 		}
	// 	}
	// 	int count=0;

	// 	for(int i=1;i<=n;i++)
	// 	{
	// 		if(nodechild[i]>nodechild[parent[i]])
	// 		{
	// 			count++;
	// 		}
	// 	}
	// 	cout<<count;
	// }
};

int main(int argc, char const *argv[])
{
	graph g;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g.addedge(u,v,false);
	}
	//g.display();
	g.bfs(n);
	//g.new12(n);
	return 0;
}