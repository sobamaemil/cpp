#include<iostream>
using namespace std;

int main() {
	int num,tot;
	cout << "***** �¸��忡 ���Ű� ȯ���մϴ�. ***** \n";
	while(true){
	cout << "«��:1, ¥��:2, ������:3, ����:4>>  "; 
	cin >> num;
	if(num == 4) {
	cout << "���� ������ �������ϴ�.";
	break;
	}
	if(num > 4)  {
	cout << "�ٽ� �ֹ��ϼ���!!\n";
	continue;
	}
	else cout << "���κ�?";
	cin >> tot;
	if(num==1) cout << "«�� " << tot << "�κ� ���Խ��ϴ�\n";
	else if(num==2) cout << "¥�� " << tot << "�κ� ���Խ��ϴ�\n";
	else if(num==3) cout << "������ " << tot << "�κ� ���Խ��ϴ�\n";
	}
	
	return 0; 
}
