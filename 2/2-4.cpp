#include <iostream>
using namespace std;

int main() {
	float a[5],H;
	int i;
	
	cout << "5 개의 실수를 입력하라>>";
	for(i=0;i<5;i++) cin >> a[i];
	
	H = a[0];
	
	for(i=1;i<5;i++) if(H<a[i]) H=a[i];
	
	cout << "제일 큰 수 = " << H;
	
	return 0;
}
