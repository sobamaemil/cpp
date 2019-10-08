#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class EvenRandom{
public:
 	EvenRandom();
	int next();
	int nextInRange(int a, int b);
};
EvenRandom::EvenRandom(){
	srand((unsigned)time(0));
}

int EvenRandom::next() {
	int ran = rand();
	if(ran%2 == 0) return ran;
	else return --ran;
} 
int EvenRandom::nextInRange(int a, int b){
	int ran = rand()%(b-a+1) + a;
		if(ran%2 == 0) return ran;
		else return --ran;
}

int main(){
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for(int i=0; i<10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for(int i=0; i<10; i++) {
		int n = r.nextInRange(2,10);
		cout << n << ' ';
	}
	cout << endl;
}
