#include<iostream>
using namespace std;

#include "3-10.h"


int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	char c;
	while(true){
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> x >> y >> c;  
		if(c == '+') {
		a.setValue(x,y);
		cout << a.calculate() << endl;
		}
		else if(c == '-') {
		s.setValue(x,y);
		cout << s.calculate() << endl;
		}
		else if(c == '*') {
		m.setValue(x,y);
		cout << m.calculate() << endl;
		}
		else if(c == '/') {
		d.setValue(x,y);
		cout << d.calculate() << endl;
		}
	}
}
