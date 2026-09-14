#include <iostream>
using namespace std;

int* rowSums(int **matrix,int rows,int cols){
    int *sums;
    int i,j;

    sums=new int[rows];

    for(i=0; i<rows; i++)
    {
        sums[i]=0;

        for(j=0; j<cols; j++)
        {
            sums[i]+=matrix[i][j];
        }
    }

    return sums;
}
int main(){
    int **matrix;
    int *sums;
    int rows,cols,i,j;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>cols;
    matrix=new int*[rows];
    for(i=0; i<rows; i++)
    {
        matrix[i]=new int[cols];
    }
    cout<<"Enter elements: "<<endl;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cin>>matrix[i][j];
        }
    }
    sums=rowSums(matrix,rows,cols);
    for(i=0; i<rows; i++)
    {
        cout<<"Sum of Row "<<i+1<<" is "<<sums[i]<<endl;
    }

    for(i=0; i<rows; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
    delete[] sums;

    return 0;
}