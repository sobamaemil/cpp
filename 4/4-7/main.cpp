#include<iostream>
using namespace std;

#include "4-7.h"

int main() {
	int cnt=0, r;;
	Circle *pArray = new Circle[3];
	for(int i=0; i<3; i++){
	cout << "�� " << i+1 << "�� ������ >> ";
	cin >> r; 
	pArray[i].setRadius(r);
	if(pArray[i].getArea() >100) cnt++; 
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�";
}
