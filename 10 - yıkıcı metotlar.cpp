#include <iostream>

using namespace std;

class Employee{
	
private:
	string name;
	int age;	
	
public:
		Employee(){
			cout << "Constructor cagrildi" << endl;
		}
		
		~Employee(){
			cout << "Destructor cagrildi" << endl;
		}		
};

int main() {
	
	Employee *emp = new Employee();			// Employee yi tutacak kadar hafizada yer ayir.
	
	delete emp;								// emp silinince destructor cagrilir.
	
	
	return 0;
}
