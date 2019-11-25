#include<iostream>
using namespace std;
int main() {
	string str;
	char ch;
	int x,max_num,i,j;
	getline(cin,str);
	i=0;
	max_num=0;
	while(str[i]!='\0')
	{
		j=i;
		x=0;
		while(str[j]!='\0')
		{
			if(str[j]==str[i])
			{
				x++;
			}
			j++;
		}
		if(x>=max_num)
		{
			max_num=x;
			ch=str[i];
		}
		i++;
	}
	cout<<ch;
}