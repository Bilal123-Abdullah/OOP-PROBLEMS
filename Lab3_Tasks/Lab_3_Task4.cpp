#include<iostream>
using namespace std;

void addFlattened2D(int* A,int* B,int* C,int rows,int cols){
    int i,j;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            C[i*cols+j]=A[i*cols+j]+B[i*cols+j];
        }
    }
}

void printFlattened2D(int* arr,int rows,int cols){
    int i,j;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cout<<arr[i*cols+j]<<" ";
        }

        cout<<endl;
    }
}

int main(){
    int rows,cols;

    cout<<"Enter number of rows: ";
    cin>>rows;

    cout<<"Enter number of columns: ";
    cin>>cols;

    int* A=new int[rows*cols];
    int* B=new int[rows*cols];
    int* C=new int[rows*cols];

    cout<<"Enter values for Matrix A:"<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>A[i*cols+j];
        }
    }

    cout<<"Enter values for Matrix B:"<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>B[i*cols+j];
        }
    }
    addFlattened2D(A,B,C,rows,cols);
    cout<<"Matrix A:"<<endl;
    printFlattened2D(A,rows,cols);

    cout<<"Matrix B:"<<endl;
    printFlattened2D(B,rows,cols);

    cout<<"Matrix C:"<<endl;
    printFlattened2D(C,rows,cols);

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}