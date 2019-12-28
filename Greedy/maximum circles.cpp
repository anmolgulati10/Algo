#include<bits/stdc++.h>
using namespace std;

class circle
{
public:
	long long int start;
	long long int end;
};

bool mycompare(circle c1,circle c2)
{
	return (c1.end<c2.end);
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	circle obj[n];

	for(int i=0;i<n;i++)
	{
		long long int c,r;
		cin>>c>>r;
		obj[i].start=(c-r);
		obj[i].end=(c+r);
	}

	sort(obj,obj+n,mycompare);

	int count=1;
	int k=0;
	for(int i=1;i<n;i++)
	{
		if(obj[i].start>=obj[k].end)
		{
			count++;
			k=i;
		}
	}

	cout<<(n-count);
	return 0;
}