#include<iostream>
#include<string>
using namespace std;

#include "4-10.h"

Family::Family(string name, int size){
	p = new Person[size];
	this->size = size;
	this->name = name;
}

void Family::setName(int num, string name){
	p[num].setName(name);
}

void Family::show(){
	cout << name << "가족은 다음과 같이 " << size << "명 입니다.\n";
	for(int i=0; i<size; i++){
		cout << p->getName() << "\t";
		p++;
	}
}

Family::~Family(){
	delete [] p;
}

