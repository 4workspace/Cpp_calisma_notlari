#include <iostream>

using namespace std;

class Employee{
public:
	string *s;
	int *i;
	
	Employee(string str, int ivalue)
	{
		s = new string;						// hafizada pointer olan s icin string'i tutacak boyut kadar yer ayrildi
		i = new int;						// hafizada pointer olan i icin int'i tutacak boyut kadar yer ayrildi
		
		*s = str;							// string olarak hafizada actigimiz yere * ile str degerini yerlestiriyoruz.
		*i = ivalue;
	}	
	
	void showInfo(){
		cout << "String degeri: " << *s << endl;			// degerler ekrana yazdiriliyor.
		cout << "int degeri: " << *i << endl;
	}
	
	~Employee()
	{
		delete s;
		delete i;
		
		cout << "Destructor cagrildi" << endl;
	}
	
};

int main() {
	
	Employee *emp = new Employee("Ahmet",24);
	
	emp->showInfo();
	
	delete emp;				// emp hafizasi silinir ama emp'in icinde bulunan s ve i pointerlari da silinir ama s ve i nin aldiklari yerler geri verilmemis olacak.(buna bellek sizintisi denir)
							// bunun icin destructor metodunu public icinde tanimlayip, cagrildiginda s ve i ye ait yerler de delete ile iade edersek silinir.
							
	
	
	
	return 0;
}

