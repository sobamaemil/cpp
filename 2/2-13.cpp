#include<iostream>
using namespace std;

int main() {
	int num,tot;
	cout << "***** 승리장에 오신걸 환영합니다. ***** \n";
	while(true){
	cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  "; 
	cin >> num;
	if(num == 4) {
	cout << "오늘 영업은 끝났습니다.";
	break;
	}
	if(num > 4)  {
	cout << "다시 주문하세요!!\n";
	continue;
	}
	else cout << "몇인분?";
	cin >> tot;
	if(num==1) cout << "짬뽕 " << tot << "인분 나왔습니다\n";
	else if(num==2) cout << "짜장 " << tot << "인분 나왔습니다\n";
	else if(num==3) cout << "군만두 " << tot << "인분 나왔습니다\n";
	}
	
	return 0; 
}
