#include<iostream>
using namespace std;
int main(){
	int i,j;
	int grid[3][3]={
		{1, 0, 1},
		{1, 1, 0},
		{0, 1, 1}
	};
	cout<<"Alive Enemy = 1 \nDead Enemy = 0"<<endl;
	int count=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(grid[i][j]==1)
			{
				count++;
			}
		}
	}
	cout<<"Total live enemies: "<<count<<endl;
	int hit=0;
	int r,c;
	for(i=0;i<count;i++)
	{
		cout<<"Enter row and column (0-2): ";
		cin>>r>>c;
		if(grid[r][c]==1)
		{
			grid[r][c]=0;
			hit++;
			cout<<"Hit. Enemy destroyed."<<endl;
		}
		else
		{
			cout<<"Miss. No enemy there."<<endl;
			i--;
		}
	}
	cout<<"All enemies are destroyed.\nTotal hits required: "<<hit<<endl;
	cout<<"Final Grid: "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<grid[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}