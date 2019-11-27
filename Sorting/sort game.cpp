#include<bits/stdc++.h>
using namespace std;

class emp
{
	public:
	int salary;
	string name;
	emp()
	{
		salary=0;
		name="";
	}
};

bool mycompare(emp e1,emp e2)
{
	if(e1.salary==e2.salary)
	{
		return e1.name<e2.name;
	}
	return e1.salary>e2.salary;
}
int main(int argc, char const *argv[])
{
	int min;
	cin>>min;
	int n;
	cin>>n;
	emp e[n];
	for(int i=0;i<n;i++)
	{
		cin>>e[i].name;
		cin>>e[i].salary;
	}

	sort(e,e+n,mycompare);
	for(int i=0;i<n;i++)
	{
		if(e[i].salary>=min)
		{
			cout<<e[i].name<<" "<<e[i].salary<<endl;
		}
	}
	return 0;
}