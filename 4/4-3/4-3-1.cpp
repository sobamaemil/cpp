#include<iostream>
#include<string>
using namespace std;

int main() {
	string str; 
	cout << "���ڿ� �Է�>>";
	getline(cin,str);
	
	int length = str.length();
	int num = 0;
	for(int i=0; i<length; i++){
		if(str[i] == 'a') num++;
	}
	cout << "���� a�� " << num << "�� �ֽ��ϴ�." ;
}
