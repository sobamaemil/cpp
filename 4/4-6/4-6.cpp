#include<iostream>
#include<string>
using namespace std;

int main() {
	string str; 
	int length;
	cout << "�Ʒ� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)";
	
	while(true){
		cout << endl << ">>";
		getline(cin,str);
		if(str == "exit") break;
		length = str.length();
		for(int i=length-1; i>=0; i--) cout << str[i];
	} 
	
}
