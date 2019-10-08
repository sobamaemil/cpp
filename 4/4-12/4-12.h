class Circle{
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager {
	Circle *p;
	int size;
	int radius;
	string name;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

