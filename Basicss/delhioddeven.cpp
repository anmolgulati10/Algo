#include<iostream>
using namespace std;
int main() {
	int n,i,num,sume=0,sumo=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {   sume=0;
        sumo=0;
        cin>>num;
        while (num>0)
        {
            x=num%10;
            if (x%2==0)
            {
                sume+=x;
            }
            else
            {
                sumo+=x;
            }
            num=num/10;
        }
        if ((sume%4==0) or (sumo%3==0))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
    return 0;
}