#include<iostream>
using namespace std;

#include "4-8.h"	

int main() {
	int r, num, cnt=0;
	cout << "���� ���� >> ";
	cin >> num ;
	Circle *pArray = new Circle[num];
	for(int i=0; i<num; i++){
		cout << "�� " << i+1 << "�� ������ >> ";
		cin >> r;
		pArray->setRadius(r);
		if(pArray->getArea() > 100) cnt++;
		pArray++; 
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�";
}
