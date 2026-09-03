#include<iostream>
using namespace std;
int** construct2DArray(int* orig,int m,int n,int len){
	int i,j;
	if(m*n!=len){
		int** empty=new int*[0];
		return empty;
	}
	int** result=new int*[m];
	for(i=0;i<m;i++){
		result[i]=new int[n];
		for(j=0;j<n;j++){
			*(*(result+i)+j)=*(orig+i*n+j);
		}
	}
	return result;
}
int main(){
    int len,m,n,i,j;
    cout<<"Enter size of original array: ";
    cin>>len;
    int *orig=new int[len];
    for(i=0;i<len;i++){
    	cout<<"Enter Elements for Array: ";
    	cin>>*(orig+i);
	}
	cout<<"Enter Rows and Columns: ";
	cin>>m>>n;
	int** result=construct2DArray(orig,m,n,len);
	if(m*n!=len){
		cout<<"Output = []"<<endl;
	}
	else{
		cout<<"Output ="<<endl;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cout<<*(*(result+i)+j)<<"  ";
			}
			cout<<endl;
		}
	}
	for(i=0;i<m;i++){
		if(m*n==len){
			delete[] result[i];
		}
	}
	delete[] result;
	delete[] orig;
	
	return 0;
}