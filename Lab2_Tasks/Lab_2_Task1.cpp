#include<iostream>
using namespace std;

int findlargest(int **matrix,int r,int c)
{
    int largest;
    int i,j;
    largest=*(*(matrix+0)+0);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(*(*(matrix+i)+j)>largest)
                largest=*(*(matrix+i)+j);
        }
    }

    return largest;
}
int main()
{
    int m,n;;
    int i,j;
    int **matrix;

    cout<<"Enter Rows and Cols: ";
    cin>>m>>n;

    matrix=new int*[m];

    for(i=0;i<m;i++)
        matrix[i]=new int[n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter Values for Matrix: ";
            cin>>*(*(matrix+i)+j);
        }
    }
    cout<<"Largest Element: "<<findlargest(matrix,m,n)<<endl;
    for(i=0;i<m;i++){
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}