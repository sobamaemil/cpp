#include<iostream>
using namespace std;

#include "4-4.h"

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}
