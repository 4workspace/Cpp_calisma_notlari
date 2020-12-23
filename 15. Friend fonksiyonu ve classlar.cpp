#include <iostream>
using namespace std;

class Employee{
private:
	string name;
	int age;
	int salary;
	
public:
	Ahmet(string name, int age, int salary){			// Burada metot ismi illa class ismi ile ayni olmasi zorunlu degil..
		this->name = name;
		this->age = age;
		this->salary = salary;
	}
	
	friend void showInfo(Employee employee);		// normalde friend yazmasaydik asagida showInfo() fonk. olusturamazdik.

};

void showInfo(Employee employee){
	cout << employee.name << endl;
	cout << employee.age << endl;
	cout << employee.salary << endl;
}


int main() {
	Employee employee;
	employee.Ahmet("Cetin",27,5000);
	showInfo(employee);
	
	return 0;
}
