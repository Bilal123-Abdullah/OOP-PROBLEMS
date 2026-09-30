#include<iostream>
#include<string>
using namespace std;
class Product{
	private:
		string name;
		double price;

	public:
		void setName(string n){
			name=n;
		}

		void setPrice(double p){
			price=p;
		}

		string getName(){
			return name;
		}

		double getPrice(){
			return price;
		}
};

void applyDiscount(Product* p,double percent){
	double discount;
	discount=p->getPrice()*(percent/100);
	p->setPrice(p->getPrice()-discount);
}

int main(){
	Product products[3];
	double percent;
	int i;

	products[0].setName("Laptop");
	products[0].setPrice(100000);

	products[1].setName("Mouse");
	products[1].setPrice(2000);

	products[2].setName("Keyboard");
	products[2].setPrice(5000);

	cout<<"Enter Discount Percentage: ";
	cin>>percent;

	for(i=0; i<3; i++)
	{
		applyDiscount(&products[i],percent);
	}

	cout<<"\nProducts after Discount:\n";

	for(i=0; i<3; i++)
	{
		cout<<"Name: "<<products[i].getName()<<endl;
		cout<<"Price: "<<products[i].getPrice()<<endl;
	}

	return 0;
}