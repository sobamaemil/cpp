#include<iostream>
#include<string>
using namespace std; 

#include "4-9.h"

int main(){
	string Name,Tel;
	string N[3];
	Person *pInf = new Person [3];
	
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���\n";
	
	for(int i=0; i<3; i++){
		cout << "��� " << i+1 << ">> ";
		cin >> Name >> Tel;
		pInf[i].set(Name,Tel);
		N[i] = pInf[i].getName();
	}
	
	cout << "��� ����� �̸��� " << N[0] << " " << N[1] << " " << N[2] << endl;
	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> Name;
	
	for(int i=0; i<3; i++){
		if(Name.compare(N[i])==0) {
			cout << "��ȭ ��ȣ�� " << pInf[i].getTel();
			break;
		}
	}
}
