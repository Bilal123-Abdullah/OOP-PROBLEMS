#include<iostream>
using namespace std;

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

    int* arr=new int[rows*cols];

    cout<<"Enter values for the array:"<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i*cols+j];
        }
    }

    cout<<"2D Matrix:"<<endl;

    printFlattened2D(arr,rows,cols);

    delete[] arr;

    return 0;
}