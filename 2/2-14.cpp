#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int num;
	int tot=0;
	char coffee[100];
	
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	
	while(true) {
	cout << "�ֹ�>> ";
	cin >> coffee >> num;
	if(strcmp(coffee,"����������")==0) {
		cout << 2000*num << "���Դϴ�. ���ְ� �弼��\n"; 
		tot+=2000*num;
	}
	else if(strcmp(coffee,"�Ƹ޸�ī��")==0) {
		cout << 2300*num << "���Դϴ�. ���ְ� �弼��\n"; 
		tot+=2300*num;
	}
	else if(strcmp(coffee,"īǪġ��")==0) {
		cout << 2500*num << "���Դϴ�. ���ְ� �弼��\n"; 
		tot+=2500*num;
	}
		
	if(tot>20000) {
		cout << "���� " << tot << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~"; 
		break;
	}
	}
	return 0;
}
