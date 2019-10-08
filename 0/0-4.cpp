#include <iostream>
using namespace std;

int main() {
	int i;
	double avg=0;
	double a[5];
	 
	cout << "실수 5개 입력>>";
	for (i=0; i<5; i++) {
		cin >> a[i];
		avg += a[i];
		cout << a[i] << ' ';	
	} 
	avg = avg/5;
	cout << "의 평균 = " << avg; 
			
}

