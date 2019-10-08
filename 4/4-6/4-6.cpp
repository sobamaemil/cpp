#include<iostream>
#include<string>
using namespace std;

int main() {
	string str; 
	int length;
	cout << "아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";
	
	while(true){
		cout << endl << ">>";
		getline(cin,str);
		if(str == "exit") break;
		length = str.length();
		for(int i=length-1; i>=0; i--) cout << str[i];
	} 
	
}
