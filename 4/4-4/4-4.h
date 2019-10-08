class Sample{
	int *p;
	int size;
public:
	Sample(int n) {	
	size = n; p = new int [n];
	}
	void read();
	void write();
	int big();
	~Sample();
};

