#include <iostream>
#include "Employee.h"
using namespace std;



int main(){
	
	Employee employee;
	
	employee.name = "Ahmet";
	employee.id = 107;
	employee.salary = 5300;
	
	employee.showinfos();
	
	return 0;
}
