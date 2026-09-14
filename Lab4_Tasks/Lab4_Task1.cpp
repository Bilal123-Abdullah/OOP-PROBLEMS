//Write a program that finds the minimum element of a 1D integer array using pointer arithmetic
//only (no [] indexing anywhere in your logic).
//?? Hint
//Use a pointer to traverse the array and compare *(ptr + i) against a running minimum.
//Initialize the minimum with the first element, *ptr, before the loop starts.
#include <iostream>
using namespace std;
int main(){
    int n;
    int *arr;
    int *ptr;
    int min,i;
    cout<<"Enter size of array: ";
    cin>>n;
    arr=new int[n];
    ptr=arr;
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
    {
        cin>>*(ptr+i);
    }
    min=*ptr;
    for(i=1; i<n; i++)
    {
        if(*(ptr+i)<min)
        {
            min=*(ptr+i);
        }
    }
    cout<<"Minimum element= "<<min;
    delete[] arr;
    return 0;
}