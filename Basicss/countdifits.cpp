#include<iostream>
using namespace std;
int main() {
	int number,digit,i=0,x;
    cin>>number>>digit;
    while(number>0)
    {
        x=number%10;
        if (x==digit)
        {
            i++;
        }
        number=number/10;
    }
    cout<<i;

}