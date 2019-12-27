#include<iostream>
using namespace std;
bool printpath(char board[1000][1000],int soln[1000][1000],int sr,int sc,int er,int ec)
{   
    if((sr==er) and (sc==ec) and board[sr][sc]=='X')
    {
        return false;
    }
	if((sr==er) and (sc==ec) )
	{
		soln[sr][sc]=1;
        for(int i=0;i<=er;i++)
		{
			for(int j=0;j<=ec;j++)
			{	
				cout<<soln[i][j]<<" ";
			}
			cout<<endl;
		}
        exit(0);
	}
	if(sr>er or sc>ec)
	{
		return false;
	}
	if(board[sr][sc]=='X')
	{
		return false;
	}
    
	soln[sr][sc]=1;
	bool right=printpath(board,soln,sr,sc+1,er,ec);
	bool left=printpath(board,soln,sr+1,sc,er,ec);
	soln[sr][sc]=0;
	if(right or left)
	{
		return true;
	}
	return false;

}
int main() {
	int m,n;
	cin>>m;
	cin>>n;
	char ch[1000][1000];
	int soln[1000][1000]={0};
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>ch[i][j];
		}
	}
	
	bool x=printpath(ch,soln,0,0,m-1,n-1);
	if(x==false)
	{
		cout<<-1;
	}
    
}