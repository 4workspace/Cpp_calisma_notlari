#include <iostream>
using namespace std;


class mat{
public:
	static void cube(int x){
		cout << x*x*x << endl;
	}
	
	static void pow(int x){
		cout << x*x << endl;
	}
};

int main() {
	
	mat::cube(3);			// :: su anlama geliyor: mat icinde ki cube metoduna ulas.
	mat::pow(10);
	
	
	return 0;
}
