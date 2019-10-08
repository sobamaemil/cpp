class Player{
	string name;
public:
	void setName(string name);
	string getName(){return name;};
};

class GamblingGame {
	Player *p = new Player[2];
public:
	GamblingGame();
	void nameSet();
	string ranNum(string n);
	void startGame(); 
	~GamblingGame() { delete [] p;}
};
