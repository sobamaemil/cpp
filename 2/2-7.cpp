#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char A[] = "yes";
	char B[100];
	while(true){
	cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
	cin.getline(B,100);
	if(strcmp(A,B) == 0) break;
	}
	
	cout << "�����մϴ�...";
	
	return 0; 
}
