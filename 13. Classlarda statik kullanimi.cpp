#include <iostream>
using namespace std;
class Gamer{
public:
	static int gamers;
	
	Gamer(){
		gamers++;
		cout << "Gamer olusturuldu. " << endl;
	}
	
};

int Gamer::gamers = 0;				// Gamer icinde bulunan gamers'a 0 atandi

int main() {
	
	Gamer gamer1;
	Gamer gamer2;
	Gamer gamer3;
	Gamer gamer4;
	
	cout << Gamer::gamers << endl;
	
	
	
	
	return 0;
}
