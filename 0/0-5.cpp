#include<iostream>
using namespace std;

bool isMultiple(int a, int b);



int main(){
	int a,b;
	bool res;
	
	cout << "�� ���� �Է�>>"; 
	cin >> a >> b;
	res = isMultiple(a,b);
	if(res==true) cout << "Yes";
	else cout << "No";
	
	return 0;
}

bool isMultiple(int a, int b){
	if(b%a) return false;
	else return true;
}


