#include<iostream>
#include<cstring>
using namespace std;

int main() {
	
	int i;
	int tot=0;
	int alpha[27]={0};
	char text[10000];
	
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
	cin.getline(text,10000,';');
	
	for (int i = 0; i<strlen(text); ++i) {
        if (isalpha(text[i])) {
        	if(text[i]<91) text[i] = tolower(text[i]);
            tot++;
			alpha[text[i] - 97]++;
        }
    }
    
    cout << "�� ���ĺ� �� " << tot << endl << endl;
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
