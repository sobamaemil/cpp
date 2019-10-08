#include<iostream>
using namespace std;

int main(){
	int i;
	
	for(i=1;i<101;i++){
		cout << i << "\t";
		if(i%10==0) cout << endl;
	}
	
	return 0;
}
