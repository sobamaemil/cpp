#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int num;
	int tot=0;
	char coffee[100];
	
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	
	while(true) {
	cout << "주문>> ";
	cin >> coffee >> num;
	if(strcmp(coffee,"에스프레소")==0) {
		cout << 2000*num << "원입니다. 맛있게 드세요\n"; 
		tot+=2000*num;
	}
	else if(strcmp(coffee,"아메리카노")==0) {
		cout << 2300*num << "원입니다. 맛있게 드세요\n"; 
		tot+=2300*num;
	}
	else if(strcmp(coffee,"카푸치노")==0) {
		cout << 2500*num << "원입니다. 맛있게 드세요\n"; 
		tot+=2500*num;
	}
		
	if(tot>20000) {
		cout << "오늘 " << tot << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~"; 
		break;
	}
	}
	return 0;
}
