#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;

template<typename T>
class graph
{
	unordered_map<T,list<pair<T,int>>> adjlist;

public:

	void addedge(T u,T v,int edge,bool bir=true)
	{
		adjlist[u].push_back(make_pair(v,edge));
		if(bir)
		{
			adjlist[v].push_back(make_pair(u,edge));
		}
	}

	void display()
	{
		for(auto x: adjlist)
		{
			cout<<x.first<<"->";
			for(auto y:adjlist[x.first])
			{
				cout<<"("<<y.first<<","<<y.second<<")"<<",";
			}
			cout<<endl;
		}
		return;
	}

	void dijkstra(T src,int n)
	{
		unordered_map<T,int> distance;

		for(auto x:adjlist)
		{
			distance[x.first]=INT_MAX;
		}

		distance[src]=0;

		set<pair<int,T>> s;
		s.insert(make_pair(0,src));

		while(!s.empty())
		{
			auto pair=*(s.begin());
			T name=pair.second;
			int dist=pair.first;
			s.erase(s.begin());

			for(auto neighbourpair:adjlist[name])
			{
				if(((neighbourpair.second)+dist)<distance[neighbourpair.first])
				{
					auto f=s.find(make_pair(distance[neighbourpair.first],neighbourpair.first));
					if(f!=s.end())
					{
						s.erase(f);
					}

					distance[neighbourpair.first]=((neighbourpair.second)+dist);
					s.insert(make_pair(distance[neighbourpair.first],neighbourpair.first));
				}
			}
		}

		for(int i=1;i<=n;i++)
		{
			if(i==src)
			{
				continue;
			}
			else if(distance[i]!=INT_MAX)
			{
				cout<<distance[i]<<" ";
			}
			else
			{
				cout<<"-1"<<" ";
			}
		}

	}

};

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		graph<int> g;
		int n,m;
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			int u,v,distance;
			cin>>u>>v>>distance;
			g.addedge(u,v,distance);
		}
		int src;
		cin>>src;
		g.dijkstra(src,n);
	}
	return 0;
}