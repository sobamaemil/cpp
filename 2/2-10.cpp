#include <iostream>
using namespace std;

int main() {
	 
	 cout << "���ڿ� �Է�>>";
	 char str[100];
	 
	 cin.getline(str,100);
	 
	 for(int i=1;i<100;i++){
	 	for(int j=0;j<i;j++) {
	 	cout << str[j];
		}
		
		if(str[i]=='\0') break;
		cout << endl;
	}
	 
	 return 0;
}
