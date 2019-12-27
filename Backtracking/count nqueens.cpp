#include<iostream>
using namespace std;
int count=0;
bool issafe(int board[11][11],int i,int j,int n)
{
	//For Columns
	for(int row=0;row<i;row++)
	{
		if(board[row][j]==1)
		{
			return false;
		}
	}
	//last diagonal
	int x=i;
	int y=j;
	while(x>=0 and y>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x--;
		y--;
	}
	//right diagonal
	 x=i;
	 y=j;
	while(x>=0 and y<n)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x--;
		y++;
	}
	return true;
}
void NQueens(int board[11][11],int i,int n)
{
	if(i==n)
	{
		::count++;
		return;
	}
	//recursive function
	for(int j=0;j<n;j++)
	{
		if(issafe(board,i,j,n))
		{
			board[i][j]=1;
			NQueens(board,i+1,n);
			board[i][j]=0;
		}
	}
	return;
}
int main() {
	int n;
	cin>>n;
	int board[11][11]={0};
	NQueens(board,0,n);
	cout<<count;
}