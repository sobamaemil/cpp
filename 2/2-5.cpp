#include <iostream>
using namespace std;

int main() {
	int i,x=0;
	char a[100];
	
	cout << "문자들을 입력하라(100개 미만).\n";
	
	cin.getline(a,100);
	
	for(i=0;i<100;i++){
		if(a[i]=='x') x++;
	}
	
	cout << "x의 개수는 " << x;
	
	return 0; 
}
