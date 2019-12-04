#include<iostream>
using namespace std;
int main() {
	int q,a,b,num,i;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>a>>b;
        int result=0;
        for(int j=a;j<=b;j++)
        {
            num=j;
            while(num>0)
            {
                result=result+(num&1);
                num=num>>1;
            }

        }
        cout<<result<<endl;
    }
}