#include<iostream>
using namespace std;

  struct Book
{
    char title[100];
    char author[100];
    float price;
};
  void displayBook(Book b)
{
    cout<<"Title: "<<b.title<<endl;
    cout<<"Author: "<<b.author<<endl;
    cout<<"Price: "<<b.price<<endl;
}
   int main()
{
    Book b;
    cout<<"Enter title: ";
    cin>>b.title;
    cout<<"Enter author: ";
    cin>>b.author;
    cout<<"Enter price: ";
    cin>>b.price;

    displayBook(b);
    return 0;
}
