#include<iostream>
#include<cstring>
using namespace std;

int main() {
	
	cout << "새 암호를 입력하세요>>";
	char pw1[100];
	char pw2[100];
	cin.getline(pw1,100);
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin.getline(pw2,100); 
	
	if(strcmp(pw1,pw2)==0) cout << "같습니다";
	else cout << "같지 않습니다";
	
	return 0; 
}
