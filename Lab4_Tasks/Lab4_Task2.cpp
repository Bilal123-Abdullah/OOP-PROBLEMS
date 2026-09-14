#include <iostream>
using namespace std;
int diagonalSum(int arr[][3]){
    int sum,i;
    sum=0;
    for(i=0; i<3; i++)
    {
        sum+=arr[i][i];
    }

    return sum;
}
int main(){
    int arr[3][3];
    int i,j;
    int sum;
    cout<<"Enter elements of matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    sum=diagonalSum(arr);
    cout<<"Diagonal Sum= "<<sum;
    return 0;
}