#include<iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d=((b*b)-(4*a*c));
    if (d<0)
    {
        cout<<"imaginary";
    }
    else if(d==0)
    {
        x1=(-b/(2*a));
        x2=x1;
        cout<<"real and equal"<<endl;
        cout<<x1<<" "<<x2;
    }
    else
    {
        x1=((-b)+(sqrt(d)))/(2*a);
        x2=((-b)-(sqrt(d)))/(2*a);
        cout<<"real and distinct"<<endl;
        if(x1>x2)
        {
            cout<<x2<<" "<<x1;
        }
        else
        {
            cout<<x1<<" "<<x2;
        }
    }
    return 0;

}