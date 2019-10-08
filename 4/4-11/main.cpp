#include<iostream>
using namespace std;

#include "4-11.h"

int main() {
	CoffeeVendingMachine *coffee = new CoffeeVendingMachine; 
	coffee->run(); 
	delete coffee;
}
