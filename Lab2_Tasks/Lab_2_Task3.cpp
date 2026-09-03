#include<iostream>
using namespace std;
int countNegatives(int** grid,int r,int c){
	int i,j;
	int count=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(*(*(grid+i)+j)<0){
				count++;
			}
		}
	}
	return count;
}
int main(){
    int m,n,i,j;
    cout<<"Enter Rows and Columns: ";
    cin>>m>>n;
    int **grid=new int*[m];
    for(i=0;i<m;i++){
    	grid[i]=new int[n];
    	for(j=0;j<n;j++){
    		cout<<"Enter Elements for Matrix: ";
    		cin>>*(*(grid+i)+j);
		}
	}
	cout<<"Input Grid = ";
	for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		cout<<*(*(grid+i)+j)<<"  ";
		}
	}
	cout<<endl;
	int count=countNegatives(grid,m,n);
    cout<<"Output = "<<count<<endl;
    for(i=0;i<m;i++){
    	delete[] grid[i];
	}
	delete[] grid;
	
	return 0;
}
