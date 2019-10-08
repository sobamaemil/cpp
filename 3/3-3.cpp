#include<iostream>
#include<string>
using namespace std;

class Account{
private:
	string name;
	int id;
	int money;
public:
	Account(string s,int a, int b);
	int deposit(int a);
	string getOwner();
	int withdraw(int a);
	int inquiry();
	
};

Account::Account(string s, int a, int b){
	name = s;
	id = a;
	money = b;
}

int Account::deposit(int a){
	money += a;
	return 0;
}

string Account::getOwner(){
	return name;
}

int Account::withdraw(int a){
	money -= a;
	return 0;
}

int Account::inquiry(){
	return money;
}




int main(){
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}
