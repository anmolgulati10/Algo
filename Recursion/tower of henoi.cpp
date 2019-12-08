#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char str,char dest,char helper)
{
	if(n==0)
	{
		return ;
	}
	towerofhanoi(n-1,str,helper,dest);

	cout<<"Moving ring "<<n<<" from "<<str<<" to "<<dest<<endl;

	towerofhanoi(n-1,helper,dest,str);
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	towerofhanoi(n,'A','B','C');
	return 0;
}