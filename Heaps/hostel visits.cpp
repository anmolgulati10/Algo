#include<bits/stdc++.h>
#include<queue>
using namespace std;

class hostel
{
public:
	long long int x;
	long long int y;
	long long int distance;
	hostel()
	{
		this->x=0;
		this->y=0;
		this->distance=0;
	}
};

class mycompare
{
	public:
	bool operator()(hostel a1,hostel a2)
	{
		return a1.distance<a2.distance;
	}
};

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	hostel h;
	priority_queue<hostel,vector<hostel>,mycompare> pq;
	int k;
	cin>>k;
	int cs=0;
	for(int i=0;i<n;i++)
	{
		int q;
		cin>>q;
		if(q==1)
		{
			cin>>h.x;
			cin>>h.y;
			h.distance=pow(h.x,2)+pow(h.y,2);
			if(cs<k)
			{
				pq.push(h);
				cs++;
			}
			else
			{
				if(h.distance<((pq.top()).distance))
				{
					pq.pop();
					pq.push(h);
				}
			}

		}
		if(q==2)
		{
			cout<<(pq.top()).distance<<endl;
		}
	}
	return 0;
}


