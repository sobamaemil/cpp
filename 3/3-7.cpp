#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class SelectableRandom{
public:
 	SelectableRandom();
	int next();
	int nextInRange(int a, int b);
};
SelectableRandom::SelectableRandom(){
	srand((unsigned)time(0));
}

int SelectableRandom::next() {
	int ran = rand();
	if(ran%2 == 0) return ran;
	else return --ran; 
} 
int SelectableRandom::nextInRange(int a, int b){
	int ran = rand()%(b-a+1) + a;
	if(ran%2 == 0) return ++ran;
	else return ran;
}

int main() {
	SelectableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for(int i=0; i<10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수  정수 10 개 --" << endl;
	for(int i=0; i<10; i++) {
		int n = r.nextInRange(2,9);
		cout << n << ' ';
	}
	cout << endl;
}
