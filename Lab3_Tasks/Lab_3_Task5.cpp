#include<iostream>
using namespace std;

int** transposeMatrix(int** arr,int rows,int cols)
{
    int** transposed;
    int i,j;

    transposed=new int*[cols];

    for(i=0; i<cols; i++)
    {
        transposed[i]=new int[rows];
    }

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            transposed[j][i]=arr[i][j];
        }
    }

    return transposed;
}

void printMatrix(int** arr,int rows,int cols)
{
    int i,j;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int rows,cols;
    int i,j;
    int** arr;
    int** transposed;

    cout<<"Enter rows: ";
    cin>>rows;

    cout<<"Enter columns: ";
    cin>>cols;

    arr=new int*[rows];

    for(i=0; i<rows; i++)
    {
        arr[i]=new int[cols];
    }

    cout<<"Enter "<<rows*cols<<" elements:"<<endl;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }

    transposed=transposeMatrix(arr,rows,cols);

    cout<<endl<<"Original Matrix:"<<endl;
    printMatrix(arr,rows,cols);

    cout<<endl<<"Transposed Matrix:"<<endl;
    printMatrix(transposed,cols,rows);

    for(i=0; i<rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    for(i=0; i<cols; i++)
    {
        delete[] transposed[i];
    }
    delete[] transposed;

    return 0;
}