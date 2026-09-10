#include<iostream>
using namespace std;

void MatrixSum(int arr[][3],int rows,int cols,int &tsum,int &mdgs,int &adgs){
    int i,j;
    tsum=0;
    mdgs=0;
    adgs=0;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            tsum+=arr[i][j];

            if(i==j)
                mdgs+=arr[i][j];

            if(i+j==cols-1)
                adgs+=arr[i][j];
        }
    }
}

int main(){
    int rows=3,cols=3;
    int arr[3][3];
    int i,j;

    for(i=0; i<rows; i++){
        cout<<"Enter Values for 3x3 Matrix: ";

        for(j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    int tsum,mdgs,adgs;

    MatrixSum(arr,rows,cols,tsum,mdgs,adgs);

    cout<<"Total Sum: "<<tsum<<endl;
    cout<<"Antidiagonal Sum: "<<adgs<<endl;
    cout<<"Main Diagonal: "<<mdgs<<endl;

    return 0;
}