#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char A[] = "yes";
	char B[100];
	while(true){
	cout << "종료하고 싶으면 yes를 입력하세요>>";
	cin.getline(B,100);
	if(strcmp(A,B) == 0) break;
	}
	
	cout << "종료합니다...";
	
	return 0; 
}
