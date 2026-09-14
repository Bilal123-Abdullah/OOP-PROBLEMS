#include <iostream>
using namespace std;

int findMax(int **arr,int *colCounts,int rows){
    int max,i,j;

    max=arr[0][0];

    for(i=0; i<rows; i++)
    {
        for(j=0; j<colCounts[i]; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }

    return max;
}

int main(){
    int **arr;
    int *colCounts;
    int rows;
    int i,j;
    int max;

    cout<<"Enter number of rows: ";
    cin>>rows;

    colCounts=new int[rows];
    arr=new int*[rows];

    for(i=0; i<rows; i++)
    {
        cout<<"Enter number of columns for row "<<i+1<<": ";
        cin>>colCounts[i];

        arr[i]=new int[colCounts[i]];
    }

    cout<<"Enter elements: "<<endl;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<colCounts[i]; j++)
        {
            cin>>arr[i][j];
        }
    }

    max=findMax(arr,colCounts,rows);

    cout<<"Maximum element = "<<max;

    for(i=0; i<rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    delete[] colCounts;

    return 0;
}