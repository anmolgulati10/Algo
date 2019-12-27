#include<iostream>
using namespace std;
bool issafe(int board[9][9],int i,int j,int num,int n)
{
	for(int row=0;row<n;row++)
	{
		if(board[row][j]==num)
		{
			return false;
		}
	}
	for(int col=0;col<n;col++)
	{
		if(board[i][col]==num)
		{
			return false;
		}
	}
	int sr=(i/3)*3;
	int sc=(j/3)*3;
	int er=sr+2;
	int ec=sc+2;
	for(int row=sr;row<=er;row++)
	{
		for(int col=sc;col<=ec;col++)
		{
			if(board[row][col]==num)
			{
				return false;
			}
		}
	}
	return true;
}
bool sodoku(int board[9][9],int i,int j,int n)
{
	if(i==n-1 and j==n-1)
	{
		for(int num=1;num<=9;num++)
		{
			if(issafe(board,i,j,num,n))
			{
				board[i][j]=num;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		return false ;
	}
	if(board[i][j]!=0)
	{
		return sodoku(board,i,j+1,n);
	}
	if(j>n-1)
	{
		return sodoku(board,i+1,0,n);
	}
	for(int num=1;num<=9;num++)
	{
		if(issafe(board,i,j,num,n))
		{
			board[i][j]=num;
			bool rob=sodoku(board,i,j+1,n);
			if(rob)
			{
				return true;
			}
		}
	}
	board[i][j]=0;
	return false;
}
int main() {
	int n;
	cin>>n;
	int board[9][9];
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cin>>board[i][j];
		}
	}
	sodoku(board,0,0,n);
	
	
}