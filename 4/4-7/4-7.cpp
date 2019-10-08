#include <iostream>
using namespace std;

#include "4-7.h";

void Circle::setRadius(int r){
	radius = r; 
}

double Circle::getArea(){
	return radius * radius * 3.14;
}
