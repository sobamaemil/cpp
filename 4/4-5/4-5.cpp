#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string sent;
	int n;
	cout << "�Ʒ� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" ;
	while(true){
		srand((unsigned)time(0));
		cout << "\n>>";
		getline(cin,sent);
		if(sent == "exit") break;
		int length = sent.length();
		while(true){
			n = rand()%length;
			if(sent[n]!='\0') break;
		}
		int a = rand()%25+95;
		sent[n] = (char)a;
		cout << sent;
	}
}
