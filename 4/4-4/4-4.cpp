#include<iostream>
using namespace std;

#include "4-4.h"

void Sample::read(){
	for(int i=0; i<10; i++){
		cin >> p[i];
	}
}
void Sample::write(){
	for(int i=0; i<10; i++){
		cout << p[i] << " ";
	}
	cout << endl;
}
int Sample::big(){
	int big = 0;
	for(int i=0; i<10; i++){
		if(big < p[i]) big = p[i];
	}
	return big;
}
Sample::~Sample(){}
