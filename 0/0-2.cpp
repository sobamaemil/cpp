#include<iostream>
using namespace std;


int comp(int a, int b) {
	int c;
    c = b%a;
    if(c==0) return 1;
    return 0;
}



int main() {
	int a,b;
	int res;
	
	cout << "두 정수 입력>> ";
	
	cin >> a >> b;
	
	res = comp(a,b);
	
	
	if(res!=0) cout << "yes";
	else cout << "no";
	return 0;

}
	

