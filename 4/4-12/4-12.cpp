#include<iostream>
#include<string>
using namespace std;

#include "4-12.h"

void Circle::setCircle(string name, int radius){
	this->name = name;
	this->radius = radius;
}
double Circle::getArea(){
	return radius * radius * 3.14;
}
string Circle::getName(){
	return name;
}

CircleManager::CircleManager(int size){
	p = new Circle[size];
	this->size = size;
	for(int i=0; i<size; i++){
		cout << "�� " << i+1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name,radius);	
	}
}
CircleManager::~CircleManager(){
	delete [] p;
}
void CircleManager::searchByName(){
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name; 
	for(int i=0; i<size; i++){
		if(name == p[i].getName()){
			cout << name << "�� ������ " << p[i].getArea() << endl; 
		}
	}
}
void CircleManager::searchByArea(){
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> radius; 
	cout << radius << "���� ū ���� �˻��մϴ�.\n";
	for(int i=0; i<size; i++){
		if(radius<p[i].getArea()){
			cout << p[i].getName() << "�� ������ " << p[i].getArea() <<","; 
		}
	}
}

