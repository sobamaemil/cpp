#include<iostream>
#include<string>
using namespace std;

int main() {
	string str; 
	cout << "���ڿ� �Է�>>";
	getline(cin,str);

	int num = 0;
	int j = -1;
	while(true){
		j = str.find('a',j+1);
		if(j == -1) break;
		num ++;
		}
	cout << "���� a�� " << num << "�� �ֽ��ϴ�." ;
}


