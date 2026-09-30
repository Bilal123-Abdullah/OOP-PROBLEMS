#include<iostream>
using namespace std;
class BankAccount{
	private:
		double balance;
		bool ValidAmount(double amount){
			if(amount>0)
				return true;
			else
				return false;
		}

	public:
		BankAccount(double abalance){
			balance=abalance;
		}

		void deposit(double adeposit){
			if(ValidAmount(adeposit)){
				balance+=adeposit;
			}
			else{
				cout<<"Invalid deposit amount"<<endl;
			}
		}

		void withdraw(double awithdraw){
			if(ValidAmount(awithdraw) && awithdraw<=balance){
				balance-=awithdraw;
			}
			else{
				cout<<"Invalid withdrawal amount"<<endl;
			}
		}

		double getBalance() const{
			return balance;
		}
};

int main(){
	double balance;
	double adeposit;
	double awithdraw;
	cout<<"Enter Initial Balance: ";
	cin>>balance;
	BankAccount b1(balance);
	cout<<"Current Balance: "<<b1.getBalance()<<endl;

	cout<<"Enter Deposit Amount: ";
	cin>>adeposit;
	b1.deposit(adeposit);
	cout<<"Remaining Balance: "<<b1.getBalance()<<endl;

	cout<<"Enter Withdraw Amount: ";
	cin>>awithdraw;
	b1.withdraw(awithdraw);
	cout<<"Remaining Balance: "<<b1.getBalance()<<endl;

	return 0;
}
