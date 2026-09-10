#include<iostream>
using namespace std;

double calculateRowAverages(int** arr,int rows,int cols,double* rowAverages)
{
    int i,j;
    double sum,highestAverage;

    for(i=0; i<rows; i++)
    {
        sum=0;

        for(j=0; j<cols; j++)
        {
            sum=sum+arr[i][j];
        }

        rowAverages[i]=sum/cols;
    }

    highestAverage=rowAverages[0];

    for(i=1; i<rows; i++)
    {
        if(rowAverages[i]>highestAverage)
        {
            highestAverage=rowAverages[i];
        }
    }

    return highestAverage;
}

int main()
{
    int n;
    int i,j;
    int** arr;
    double* rowAverages;
    double highestAverage;
    int highestRow;

    cout<<"Enter n: ";
    cin>>n;

    arr=new int*[n];

    for(i=0; i<n; i++)
    {
        arr[i]=new int[n];
    }

    cout<<"Enter "<<n*n<<" elements:"<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    rowAverages=new double[n];

    highestAverage=calculateRowAverages(arr,n,n,rowAverages);

    highestRow=0;

    for(i=1; i<n; i++)
    {
        if(rowAverages[i]>rowAverages[highestRow])
        {
            highestRow=i;
        }
    }

    cout<<endl<<"Row Averages:"<<endl;

    for(i=0; i<n; i++)
    {
        cout<<"Row "<<i+1<<": "<<rowAverages[i]<<endl;
    }

    cout<<endl<<"Row with highest average: "<<highestRow+1<<endl;
    cout<<"Highest average: "<<highestAverage<<endl;

    for(i=0; i<n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    delete[] rowAverages;

    return 0;
}