#include <iostream>
using namespace std;

int main() {
	int i,x=0;
	char a[100];
	
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	
	cin.getline(a,100);
	
	for(i=0;i<100;i++){
		if(a[i]=='x') x++;
	}
	
	cout << "x�� ������ " << x;
	
	return 0; 
}
