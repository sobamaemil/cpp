#include<iostream>
using namespace std;

int main() {
	cout << "�̸���?";
	char name[100];
	cin.getline(name,100,'\n');
	cout << "�ּҴ�?";
	char addr[100];
	cin.getline(addr,100,'\n');
	cout << "���̴�?";
	int age;
	cin >> age;
	cout << name << ", " << addr << ", " << age << "��";
	
	return 0;
	
}
