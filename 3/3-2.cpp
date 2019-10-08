#include<iostream>
#include<string>
using namespace std;

class Date{
private:
	int Year, Month, Day;  
public:
	Date(int a, int b, int c);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int a, int b, int c){
	Year = a;
	Month = b;
	Day = c;
}

Date::Date(string s){
	Year = stoi(s.substr(0,4));
	Month = stoi(s.substr(5,1));
	Day = stoi(s.substr(7,2));
}

void Date::show(){
	cout << Year << "³â" << Month << "¿ù" << Day << "ÀÏ\n";
}

int Date::getYear(){
	return Year;
}

int Date::getMonth(){
	return Month;
}

int Date::getDay(){
	return Day;
}


int main(){
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
	
	return 0;
}
