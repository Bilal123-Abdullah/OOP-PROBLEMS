#include <iostream>
using namespace std;

int countEven(int *arr,int size){
    int count,i;
    count=0;
    for(i=0; i<size; i++)
    {
        if(*(arr+i)%2==0)
        {
            count++;
        }
    }
    return count;
}
int main(){
    int *arr,size,count,i;
    cout<<"Enter size of array: ";
    cin>>size;
    arr=new int[size];
    cout<<"Enter elements: ";
    for(i=0; i<size; i++)
    {
        cin>>*(arr+i);
    }
    count=countEven(arr,size);
    cout<<"Number of Even Elements= "<<count;
    delete[] arr;
    return 0;
}