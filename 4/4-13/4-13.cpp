#include<iostream>
#include<string>
using namespace std;

#include"4-13.h"

Histogram::Histogram(string text){
	sent = text;
	cout << sent << endl;
}
void Histogram::put(string text){
	sent += text;
	cout << text;
}
void Histogram::putc(char c){
	sent += c;
	cout << c;
}
void Histogram::print(){
    int alpha[26] = { 0 };
    int num = 0;
	for (int i = 0; i < sent.length(); i++) {
        if(isalpha(sent[i])){
			char c = tolower(sent[i]);
			alpha[c - 'a']++;
			num++;
		}
	}
    cout << endl << endl;
    cout << "�� ���ĺ� �� " << num;
    cout << endl << endl;
    for (int i = 0; i < 26; ++i) {
        char c = 'a' + i;
        cout << c << " (" << alpha[i] << ")\t: ";
        for (int j = 0; j < alpha[i]; ++j) {
            cout << "*";
        }
        cout << endl;
}
}
