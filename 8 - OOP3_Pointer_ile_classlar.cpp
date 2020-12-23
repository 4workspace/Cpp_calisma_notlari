#include <iostream>

using namespace std;

class Employee{
	private:
		string name;
		int age;
		
	public:
		void setName(string isim)			// private olarak tanýmlanan degiskene isim atamak icin
		{
			name = isim;
		}
		void setAge(int yas)				// private olarak tanimlanan degiskene yas atamak icin
		{
			age = yas;
		}
		
		string getName()					// private de tanimlanan name almak icin
		{
			return name;
		}
		int getAge()					// private de tanimlanan age almak icin
		{
			return age;
		}
	
};

int main()
{
	Employee* employee = new Employee();			// Employee yi tutacak kadar hafiza da yer ayirt demek.
	
	employee->setName("Ahmet");
	employee->setAge(27);
	
	cout << "isim: " << employee->getName() << endl;
	cout << "Yas: " << employee->getAge() << endl;
	
	return 0;
}
