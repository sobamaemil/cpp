#include<iostream>
using namespace std;

int main() {
	int i, j;
	
	for(i=1; i<10; i++){
		for(j=1; j<10; j++) {
		cout << j << "x" << i << "=" << j*i << '\t';
		if(j==9) cout << endl;
		}
	}

	return 0;
}
