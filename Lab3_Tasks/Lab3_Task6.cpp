#include <iostream>
using namespace std;

int* mergeArrays(int *arr1,int size1,int *arr2,int size2){
    int *merged;
    int i;

    merged=new int[size1+size2];

    for(i=0; i<size1; i++)
    {
        merged[i]=arr1[i];
    }

    for(i=0; i<size2; i++)
    {
        merged[size1+i]=arr2[i];
    }

    return merged;
}

int main(){
    int *arr1;
    int *arr2;
    int *merged;
    int size1,size2,i;
    cout<<"Enter size of first array: ";
    cin>>size1;
    arr1=new int[size1];
    cout<<"Enter elements of first array: ";
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of second array: ";
    cin>>size2;
    arr2=new int[size2];
    cout<<"Enter elements of second array: ";
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
    }
    merged=mergeArrays(arr1,size1,arr2,size2);
    cout<<"Merged array: ";
    for(i=0; i<size1+size2; i++)
    {
        cout<<merged[i]<<" ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] merged;

    return 0;
}