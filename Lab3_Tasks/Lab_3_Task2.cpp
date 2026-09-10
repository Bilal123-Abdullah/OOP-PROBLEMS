#include<iostream>
using namespace std;

bool isSymmetric(int arr[][4],int rows,int cols){
    int i,j;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            if(arr[i][j]!=arr[j][i])
                return false;
        }
    }

    return true;
}

int main(){
    int rows=4,cols=4;
    int arr1[4][4],arr2[4][4];
    int i,j;

    cout<<"Enter Values for First 4x4 Matrix:"<<endl;

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter Values for Second 4x4 Matrix:"<<endl;

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            cin>>arr2[i][j];
        }
    }

    if(isSymmetric(arr1,rows,cols))
        cout<<"First Matrix is symmetric."<<endl;
    else
        cout<<"First Matrix is not symmetric."<<endl;

    if(isSymmetric(arr2,rows,cols))
        cout<<"Second Matrix is symmetric."<<endl;
    else
        cout<<"Second Matrix is not symmetric."<<endl;

    return 0;
}