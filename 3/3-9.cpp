#include<iostream>
using namespace std;

class Oval{
private:
	int width, height;
public:
	Oval();
	Oval(int a, int b);
	int getWidth();
	int getHeight();
	int set(int w, int h);
	int show();
	~Oval();
};

	Oval::Oval(){
		width = 1;
		height = 1;
	}
	Oval::Oval(int a, int b){
		width = a;
		height = b;
	}
	int Oval::getWidth(){
		return width;
	}
	int Oval::getHeight(){
		return height;
	}
	int Oval::set(int w, int h){
		width = w;
		height = h;
	}
	
	int Oval::show(){
		cout << "width = " << width << " Height = " << height << endl;
	}
	
	Oval::~Oval(){
		cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl; 
	}
	
int main() {
	Oval a, b(3,4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}
