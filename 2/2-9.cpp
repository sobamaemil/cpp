#include<iostream>
using namespace std;

int main() {
	cout << "이름은?";
	char name[100];
	cin.getline(name,100,'\n');
	cout << "주소는?";
	char addr[100];
	cin.getline(addr,100,'\n');
	cout << "나이는?";
	int age;
	cin >> age;
	cout << name << ", " << addr << ", " << age << "세";
	
	return 0;
	
}
