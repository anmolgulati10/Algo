#include<iostream>
using namespace std;
int main() {
	int i=1,n=1,num1,num2;
    cin>>num1>>num2;
    while(i<=num1)
    {
        if((3*n+2)%num2==0)
        {
            n++;
            continue;
        }
        else
        {
            i++;
            cout<<(3*n+2)<<endl;
            n++;
        }
    }
    return 0;
}