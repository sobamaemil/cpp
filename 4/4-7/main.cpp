#include<iostream>
using namespace std;

#include "4-7.h"

int main() {
	int cnt=0, r;;
	Circle *pArray = new Circle[3];
	for(int i=0; i<3; i++){
	cout << "원 " << i+1 << "의 반지름 >> ";
	cin >> r; 
	pArray[i].setRadius(r);
	if(pArray[i].getArea() >100) cnt++; 
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
}
