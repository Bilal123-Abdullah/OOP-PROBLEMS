#include<iostream>
using namespace std;

struct Item
{
    char name[50];
    int quantity;
    float price;
};

float totalCost(const Item items[],int size)
{
    int i;
    float total=0;

    for(i=0; i<size; i++)
    {
        total=total+(items[i].quantity*items[i].price);
    }

    return total;
}

int main()
{
    Item items[3];
    int i;
    float total;

    for(i=0; i<3; i++)
    {
        cout<<"Enter name: ";
        cin>>items[i].name;

        cout<<"Enter quantity: ";
        cin>>items[i].quantity;

        cout<<"Enter price: ";
        cin>>items[i].price;
    }

    total=totalCost(items,3);

    cout<<"Total Cost = "<<total<<endl;

    return 0;
}