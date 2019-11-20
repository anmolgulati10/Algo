include<iostream>
using namespace std;
int main() {
	int num1,num2,i,n,x;
    cin>>num1>>num2;
    n=(num1>=num2) ? num1 : num2;
    for(i=(num1*num2);i>=n;i--)
    {
        if ((i%num1==0) and (i%num2==0))
        {
            x=i;
        }
    }
    cout<<x;
}