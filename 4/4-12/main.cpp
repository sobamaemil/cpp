#include<iostream>
#include<string>
using namespace std;

#include "4-12.h"

int main() {
	int size;
	cout << "원의 개수 >> ";
	cin >> size; 
	CircleManager CM(size); 
	CM.searchByName();
	CM.searchByArea();	
	
}
