#include<iostream>
#include<cstring>
using namespace std;

int main() {
	
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	char pw1[100];
	char pw2[100];
	cin.getline(pw1,100);
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin.getline(pw2,100); 
	
	if(strcmp(pw1,pw2)==0) cout << "�����ϴ�";
	else cout << "���� �ʽ��ϴ�";
	
	return 0; 
}
