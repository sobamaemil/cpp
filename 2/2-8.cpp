#include<iostream>
#include<cstring>
using namespace std;

int main() {

	int A=0;
	int i;
	char name[100];
	char cmp[100];
	
	cout << "5 명의 이름을 ';' 으로 구분하여 입력하세요 \n>>";
	
	for(i=1;i<6;i++){
		cin.getline(name,100,';');
		cout << i << " : " << name << endl;
		if(A < strlen(name)) {
			A = strlen(name);
			strcpy(cmp,name);
		}
	}
	cout << "가장 긴 이름은 " << cmp;
	
	return 0;
}

