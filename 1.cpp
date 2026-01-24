#include<iostream>
using namespace std;
class Bankaccount{
	private:
		double balance;
	public:
		Bankaccount(int b){
			balance=b;}
		friend class Accountmanager;
};
class Accountmanager{
	public:                                                                                                                          
		void displaybalance( Bankaccount& account){
		cout<<account.balance<<endl;
		}
		void addbalance(Bankaccount& account,double amount){
			account.balance+=amount;
			cout<<account.balance<<endl;
		}
		void deductbalance(Bankaccount& account,double amount){
			account.balance-=amount;
			cout<<account.balance<<endl;
		}
};
int main(){
	double amount;
	Bankaccount myaccount(1000);
	Accountmanager manager;
	manager.displaybalance(myaccount);
	manager.addbalance(myaccount,50);
	manager.deductbalance(myaccount,24);
	return 0;
	}