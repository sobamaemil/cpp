#include<iostream>
using namespace std;

class CoffeeMachine{
private:
	int coff, wat, sug;
public:
	CoffeeMachine(int a, int b, int c);
	int drinkEspresso();
	int drinkAmericano();
	int drinkSugarCoffee();
	int fill();
	int show(); 
	
};

CoffeeMachine::CoffeeMachine(int a, int b, int c){
	coff = a;
	wat = b;
	sug = c;
}

int CoffeeMachine::drinkEspresso(){
	coff--;
	wat--;
}

int CoffeeMachine::drinkAmericano() {
	coff--;
	wat--; wat--;
}

int CoffeeMachine::drinkSugarCoffee() {
	coff--;
	wat--; wat--;
	sug--;
}

int CoffeeMachine::fill(){
	coff = 10;
	wat = 10;
	sug = 10;
}

int CoffeeMachine::show(){
	cout << "커피 머신 상태, 커피:" << coff << "\t물:" << wat << "\t설탕:" << sug << endl;  
}


int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}
