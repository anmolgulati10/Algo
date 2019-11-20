#include<iostream>
using namespace std;

int main() {
	int num,i,x=0;
    cin>>num;

    for(i=2;i<=9;i++)
    {
        if(num%i==0 and num!=i)
        {   x=0;
            cout<<"Not Prime";
            break;
        }
        else
        {
            x=1;
        }
    }
    if (x==1)
    {
        cout<<"Prime";
    }
}