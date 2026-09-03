#include<iostream>
using namespace std;
int diagonalSum(int** matrix,int size){
	int i,j;
	int sum=0;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(i==j){
				sum=sum+*(*(matrix+i)+j);
			}
			else if(i+j==size-1){
				sum=sum+*(*(matrix+i)+j);
			}
		}
	}
	return sum;
}
int main(){
    int m,n,i,j;
    cout<<"Enter Rows and Columns: ";
    cin>>m>>n;
    int **matrix=new int*[m];
    for(i=0;i<m;i++){
    	matrix[i]=new int[n];
    	for(j=0;j<n;j++){
    		cout<<"Enter Elements for Matrix: ";
    		cin>>*(*(matrix+i)+j);
		}
	}
	cout<<"Input Grid ="<<endl;
	for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		cout<<*(*(matrix+i)+j)<<"  ";
		}
		cout<<endl;
	}
	int sum=diagonalSum(matrix,m);
    cout<<"Output = "<<sum<<endl;
    for(i=0;i<m;i++){
    	delete[] matrix[i];
	}
	delete[] matrix;
	
	return 0;
}