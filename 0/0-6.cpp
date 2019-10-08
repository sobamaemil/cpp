#include<iostream>
using namespace std;

void swapArray(int *p, int *q, int size);
void printArray(int *p,int size);

void swapArray(int *p, int *q, int size){
	int a[5],i;
	
	for(i=0; i<size;i++){
		a[i]=p[i];
		p[i]=q[i];
		q[i]=a[i];	
	}
}

void printArray(int *p, int size){
	int i;
	
	for(i=0; i<size; i++){
	cout << p[i] << ' ';
	}
	
}

int main(){
	
	int a[] = {1,2,3,4,5};
	int b[] = {9,8,7,6,5};
	
	cout << "배열 a = "; 
	printArray(a,5);
	cout << endl << "배열 b = ";
	printArray(b,5);
	cout << endl << "swapArray() 실행..."; 
	swapArray(a,b,5);
	cout << endl << "배열 a = "; 
	printArray(a,5);
	cout << endl << "배열 b = ";
	printArray(b,5);
	
	return 0;
}
