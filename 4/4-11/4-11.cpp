#include<iostream>
using namespace std;

#include "4-11.h"

int start = 0;

void Container::fill(){
	size = 10;
}
void Container::consume(){
	size--;
}
int Container::getSize(){
	return size;
}


void CoffeeVendingMachine::run(){
	int num;
	if (start==0) cout << "***** Ŀ�� ���Ǳ⸦ �۵��մϴ�. *****\n";
	start++;
	while(true){
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
		cin >> num;
		switch(num){
			case 1: 
				selectEspresso();
			 	break;
			case 2:
				selectAmericano();
				break;
			case 3:
				selectSugarCoffee();
				break;
			case 4:
				show();
				break;
			case 5:
				fill();
				break;
		}
	}
}
void CoffeeVendingMachine::selectEspresso(){
	for(int i=0; i<3; i++){
		if(tong[i].getSize() == 0) {
			cout << "���ᰡ �����մϴ�.\n";
			run();
		}
	}
	tong[0].consume();
	tong[1].consume();
	cout << "���������� �弼��\n"; 
}
void CoffeeVendingMachine::selectAmericano(){
	for(int i=0; i<3; i++){
		if(tong[i].getSize() == 0) {
			cout << "���ᰡ �����մϴ�.\n";
			run();
		}
	}
	tong[0].consume();
	tong[1].consume(); tong[1].consume();
	cout << "�Ƹ޸�ī�� �弼��\n"; 
}
void CoffeeVendingMachine::selectSugarCoffee(){
	for(int i=0; i<3; i++){
		if(tong[i].getSize() == 0) {
			cout << "���ᰡ �����մϴ�.\n";
			run();
		}
	}
	tong[0].consume();
	tong[1].consume(); tong[1].consume();
	tong[2].consume();
	cout << "����Ŀ�� �弼��\n"; 
}
void CoffeeVendingMachine::show(){
	cout << "Ŀ�� " << tong[0].getSize();
	cout << ", �� " << tong[1].getSize();
	cout << ", ���� " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::fill(){
	for(int i=0; i<3; i++){
		tong[i].fill();
	}
	show();
}

