#include<iostream>
#include<cstring>
using namespace std;

int main() {
	
	int i;
	int tot=0;
	int alpha[27]={0};
	char text[10000];
	
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	cin.getline(text,10000,';');
	
	for (int i = 0; i<strlen(text); ++i) {
        if (isalpha(text[i])) {
        	if(text[i]<91) text[i] = tolower(text[i]);
            tot++;
			alpha[text[i] - 97]++;
        }
    }
    
    cout << "총 알파벳 수 " << tot << endl << endl;
    for (int i = 0; i < 26; ++i) {
        char abcde = i + 'a';
        
        cout << abcde << "(" << alpha[i] << ")";
        for (int j = 0; j <4 - alpha[i] / 10; ++j) cout << " ";
        
        cout << ":  ";
        for (int j = 1; j <= alpha[i]; ++j) cout << "*";
        
        cout << endl;
    }
	return 0;
}
