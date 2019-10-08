class Person {
	string name;
public:
	Person() {};
	Person(string name) { this->name = name;}
	void setName(string name) { this->name = name;}
	string getName() { return name;}
	
};

class Family {
	Person *p;
	int size;
	string name;
public:
	Family(string name, int size);
	void setName(int num, string name);
	void show();
	~Family();
};
