#include<iostream>
using namespace std;
int main() {
	int minf,maxf,step,i;
	int C;
	cin>>minf>>maxf>>step;

	for(i=minf;i<=maxf;i=i+step)
	{
		C=(5/9.0)*(i-32);
		cout<<i<<" "<<C<<endl;
	}
	return 0;
}